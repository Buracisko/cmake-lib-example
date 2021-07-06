# dummyLibrary CMakeLists.txt
cmake_minimum_required(VERSION 3.13)

project(dummyLibrary LANGUAGES C)

add_library(${PROJECT_NAME} SHARED src/foo.c)
add_library(dummy::library ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/include
)
