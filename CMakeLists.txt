SET(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

project(bird_cache)
	

add_compile_options(-std=c++11  -lpthread)

# Skip build rpath
set(CMAKE_SKIP_BUILD_RPATH True)

# Set target output directory
set(PROJECT_SRC_ROOT "/Users/qixianghui/bird/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SRC_ROOT}/bin)

include_directories(${PROJECT_SRC_ROOT}/include)
aux_source_directory(${PROJECT_SRC_ROOT}/src SRC_FILES)

add_executable(main ${SRC_FILES}  ${PROJECT_SRC_ROOT}/src/main.cpp)

target_link_libraries(main -lpthread -g)

