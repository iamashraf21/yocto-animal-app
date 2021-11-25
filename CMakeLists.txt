cmake_minimum_required(VERSION 2.8.9)
project(animalapp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(animalapp main.cpp animal.cpp dog.cpp)
install(TARGETS animalapp RUNTIME DESTINATION bin)