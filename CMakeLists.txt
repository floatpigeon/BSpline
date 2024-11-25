cmake_minimum_required(VERSION 3.12)
project(Project)

set(CMAKE_CXX_STANDARD 20)

# Add executable
add_executable(Project src/main.cpp)

# Include Eigen headers manually
target_include_directories(Project PRIVATE /usr/include/eigen3)

# First build:
# 	cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..

# if run error please use:
# 	LD_PRELOAD=/lib/x86_64-linux-gnu/libpthread.so.0 ./Project