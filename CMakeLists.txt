cmake_minimum_required(VERSION 3.15.0)
project( DisplayImage  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

include(PathToOpenCV.cmake)
find_package(OpenCV REQUIRED) 

include_directories( ${OpenCV_INCLUDE_DIRS} )

add_subdirectory(Application)

add_executable(DisplayImageApp)

target_link_libraries( DisplayImageApp PRIVATE ${OpenCV_LIBS} Application)