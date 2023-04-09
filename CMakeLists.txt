cmake_minimum_required(VERSION 3.0.0)
project( DisplayImage )

include(PathToOpenCV.cmake)
find_package(OpenCV REQUIRED) 

include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage Application/main.cpp )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )