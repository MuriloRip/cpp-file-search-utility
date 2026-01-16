cmake_minimum_required(VERSION 3.10)

project(FileSearchUtility VERSION 1.0)

add_executable(file_search_utility src/main.cpp)

set_target_properties(file_search_utility PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.0)
    target_link_libraries(file_search_utility PRIVATE stdc++fs)
endif()
