cmake_minimum_required(VERSION 3.12)

project("LINKED_TEST")

add_library(Nodelib SHARED IMPORTED)
add_library(LinkedListlib SHARED IMPORTED)

# target을 만들어서 Nodelib.lib, Nodelib.dll파일을 정의해주는 방식
set_target_properties(Nodelib PROPERTIES
    IMPORTED_CONFIGURATIONS        "RELEASE"
    IMPORTED_IMPLIB_RELEASE ${CMAKE_SOURCE_DIR}/install/lib/Nodelib.lib
    IMPORTED_LOCATION_RELEASE ${CMAKE_SOURCE_DIR}/install/bin/Nodelib.dll)
    # 빌드할때는 dll파일을 참조하여 실행파일을 생성한다.
    # 그러나, exe파일만 별도로 실행할때 .dll파일이 필요하므로 dll파일을 실행파일과
    # 같은 위치에 넣어주는 작업이 별도로 필요하다.
set_target_properties(LinkedListlib PROPERTIES
    IMPORTED_CONFIGURATIONS        "RELEASE"
    IMPORTED_IMPLIB_RELEASE ${CMAKE_SOURCE_DIR}/install/lib/LinkedListlib.lib
    IMPORTED_LOCATION_RELEASE ${CMAKE_SOURCE_DIR}/install/bin/LinkedListlib.dll)

target_include_directories(Nodelib INTERFACE ${CMAKE_SOURCE_DIR}/install/include)
target_include_directories(LinkedListlib INTERFACE ${CMAKE_SOURCE_DIR}/install/include)

add_executable(LinkedListexe src/main.cpp)
target_include_directories(LinkedListexe PUBLIC ${CMAKE_SOURCE_DIR}/include)


target_link_libraries(LinkedListexe PUBLIC Nodelib)
target_link_libraries(LinkedListexe PUBLIC LinkedListlib)



# 해당 헤더, lib, dll파일을 linking 시킬 수 있도록 위치를 알려줘야함
# cmake_minimum_required(VERSION 3.12)

# project(LINKED_TEST)

# add_executable(test1 src/main.cpp)

# target_link_directories(test1 PRIVATE install/lib)

# target_include_directories(test1 PRIVATE install/include)
# target_link_libraries(test1 PRIVATE Nodelib LinkedListlib)

