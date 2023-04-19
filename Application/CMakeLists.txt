add_library(Application INTERFACE)

target_sources(Application INTERFACE 
	main.cpp
	Application.h
)

target_link_directories(Application INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")