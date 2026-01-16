cmake_minimum_required(VERSION 3.10)

project(FileSearchUtility VERSION 1.0)

add_executable(file_search_utility src/main.cpp)

target_compile_features(file_search_utility PRIVATE cxx_17)

# Optional: Link against filesystem library for C++17
if(CMAKE_VERSION VERSION_GREATER_EQUAL "3.13")
    target_link_libraries(file_search_utility PRIVATE stdc++fs)
endif()
