cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name
project(hypotenuse                # Mandatory
    VERSION 1.0
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)                                              # Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Adds an executable target to be built from the source files listed in the command invocation.
add_executable(hypotenuse
    hypotenuse.cc)

# Add expected compiler features to a target.
target_compile_features(hypotenuse PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(hypotenuse PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
