cmake_minimum_required(VERSION 3.12)
project("CH4")

add_library(PointLib src/Point.cpp)
add_library(RectangleLib src/Rectangle.cpp)
target_include_directories(PointLib PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(RectangleLib PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(mainexe src/main.cpp)
target_link_libraries(mainexe PRIVATE PointLib)
target_link_libraries(mainexe PRIVATE RectangleLib)