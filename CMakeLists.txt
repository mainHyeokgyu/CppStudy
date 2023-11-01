cmake_minimum_required(VERSION 3.12) # CMake는 버전에 따라 차이가 심해 명시적으로 선언

project("LINKED_TEST") # 프로젝트 명
include(GenerateExportHeader) # generate_export_header를 사용하기 위함

set(LINKEDLIST_HEADERS
        "${CMAKE_BINARY_DIR}/linkedlistlib_export.h"
        "include/LinkedList.h")
set(NODE_HEADERS
        "${CMAKE_BINARY_DIR}/nodelib_export.h"
        "include/Node.h")
        
add_library(Nodelib SHARED src/Node.cpp)
add_library(LinkedListlib SHARED src/LinkedList.cpp) # LinkedList.cpp 파일을 library 파일(target)으로 생성

target_include_directories(Nodelib PUBLIC ${CMAKE_SOURCE_DIR}/include ${CMAKE_BINARY_DIR}) # library 파일(target)이 헤더파일을 찾기 위한 경로를 지정
target_include_directories(LinkedListlib PUBLIC ${CMAKE_SOURCE_DIR}/include ${CMAKE_BINARY_DIR}) # library 파일(target)이 헤더파일을 찾기 위한 경로를 지정

generate_export_header(Nodelib) # Nodelib target에대한 export header를 추가해줌 (/build에 생성됨)
generate_export_header(LinkedListlib)

add_executable(LinkedListexe src/main.cpp) # 필요한 source 파일을 추가하여 실행파일(target) 생성


target_include_directories(LinkedListexe PUBLIC ${CMAKE_SOURCE_DIR}/include) # 실행파일(target)이 헤더파일을 찾기 위한 경로를 지정(include_directories보다 효율적)

target_link_libraries(LinkedListexe PUBLIC LinkedListlib) # executable과 library 파일 linking


set_target_properties(LinkedListlib PROPERTIES PUBLIC_HEADER "${LINKEDLIST_HEADERS}")

set_property(TARGET Nodelib PROPERTY PUBLIC_HEADER ${CMAKE_BINARY_DIR}/nodelib_export.h include/Node.h)

INSTALL(TARGETS Nodelib LinkedListlib
        EXPORT LinkedListNodeTargets
        LIBRARY DESTINATION lib 
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib # target의 .lib install/lib 디렉토리에 추가
        PUBLIC_HEADER DESTINATION include
        )

INSTALL(EXPORT LinkedListNodeTargets
        FILE LinkedListNodeTargetsconfig.cmake
        DESTINATION lib/cmake/LinkedListNodeTargets)


## cmake --build . --config Release
## cmake --install . --prefix install