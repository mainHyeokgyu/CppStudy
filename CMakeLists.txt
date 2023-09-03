cmake_minimum_required(VERSION 3.12) # CMake는 버전에 따라 차이가 심해 명시적으로 선언
project("LINKED_TEST") # 프로젝트 명

add_library(Nodelib src/Node.cpp)
add_library(LinkedListlib src/LinkedList.cpp) # LinkedList.cpp 파일을 library 파일(target)으로 생성
target_include_directories(LinkedListlib PUBLIC ${CMAKE_SOURCE_DIR}/include) # library 파일(target)이 헤더파일을 찾기 위한 경로를 지정
target_include_directories(Nodelib PUBLIC ${CMAKE_SOURCE_DIR}/include)
# include_directories(include) # build 되는 executable에 해당 경로를 include 하여 빌드 하도록 함

add_executable(LinkedListexe src/main.cpp) # 필요한 source 파일을 추가하여 실행파일(target) 생성
# target_include_directories(LinkedListexe PUBLIC ${CMAKE_SOURCE_DIR}/include) # 실행파일(target)이 헤더파일을 찾기 위한 경로를 지정(include_directories보다 효율적)
target_link_libraries(LinkedListexe PRIVATE LinkedListlib) # executable과 library 파일 linking