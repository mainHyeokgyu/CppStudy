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

target_include_directories(Nodelib PUBLIC ${CMAKE_SOURCE_DIR}/include ${CMAKE_BINARY_DIR})
target_include_directories(LinkedListlib PUBLIC ${CMAKE_SOURCE_DIR}/include ${CMAKE_BINARY_DIR}) # library 파일(target)이 헤더파일을 찾기 위한 경로를 지정
# include_directories(include) # build 되는 executable에 해당 경로를 include 하여 빌드 하도록 함

generate_export_header(Nodelib) # Nodelib target에대한 export header를 추가해줌 (/build에 생성됨)
generate_export_header(LinkedListlib)

add_executable(LinkedListexe src/main.cpp) # 필요한 source 파일을 추가하여 실행파일(target) 생성

# target_compile_definitions(Nodelib PUBLIC NODELIB_EXPORT)
target_include_directories(LinkedListexe PUBLIC ${CMAKE_SOURCE_DIR}/include) # 실행파일(target)이 헤더파일을 찾기 위한 경로를 지정(include_directories보다 효율적)

target_link_libraries(LinkedListexe PUBLIC LinkedListlib) # executable과 library 파일 linking
# target_link_libraries(LinkedListlib PUBLIC Nodelib)

set_target_properties(LinkedListlib PROPERTIES PUBLIC_HEADER "${LINKEDLIST_HEADERS}")
# set_target_properties(Nodelib PROPERTIES PUBLIC_HEADER "${NODE_HEADERS}")
set_property(TARGET Nodelib PROPERTY PUBLIC_HEADER ${CMAKE_BINARY_DIR}/nodelib_export.h include/Node.h)

INSTALL(TARGETS Nodelib LinkedListlib
        LIBRARY DESTINATION lib 
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib # target의 .lib install/lib 디렉토리에 추가
        PUBLIC_HEADER DESTINATION include
        )
# INSTALL(FILES ${CMAKE_SOURCE_DIR}/include/Node.h
#               ${CMAKE_SOURCE_DIR}/include/LinkedList.h
#               ${CMAKE_BINARY_DIR}/nodelib_export.h
#               ${CMAKE_BINARY_DIR}/linkedlistlib_export.h
#         DESTINATION include)



# cmake --build . --config Release
# cmake --install . --prefix install