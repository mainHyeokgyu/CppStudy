cmake_minimum_required(VERSION 3.12) # CMake는 버전에 따라 차이가 심해 명시적으로 선언
project("LINKED_TEST") # 프로젝트 명

add_executable(LinkedListexe src/main.cpp) # 필요한 source 파일을 추가하여 실행파일(target) 생성
add_library(LinkedListlib src/LinkedList.cpp) # LinkedList.cpp 파일을 library 파일(target)으로 생성
# include_directories(include) # build 되는 executable에 해당 경로를 include 하여 빌드 하도록 함
# target_include_directories(LinkedListexe PUBLIC ${CMAKE_SOURCE_DIR}/include) # 실행파일(target)이 헤더파일을 찾기 위한 경로를 지정(include_directories보다 효율적)
target_include_directories(LinkedListlib PUBLIC ${CMAKE_SOURCE_DIR}/include) # library 파일(target)이 헤더파일을 찾기 위한 경로를 지정
# Public으로 선언해주었기 때문에 LinkedListexe(target)에 target_incllude_directories를 해 줄 필요가 없음.
target_link_libraries(LinkedListexe PRIVATE LinkedListlib) # executable과 library 파일 linking
# shared library, static library 공부 해보기