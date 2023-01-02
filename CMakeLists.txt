cmake_minimum_required(VERSION 3.1)
project (NEIGE C CXX)

# Specify where to put all the RUNTIME target files when built.
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory("SDL2")
add_subdirectory("SDL_net")

if(NOT EXISTS "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/images")
    file(MAKE_DIRECTORY images)
endif()

file(COPY ${CMAKE_SOURCE_DIR}/images DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

include_directories(SDL2/include SDL2_net)

add_subdirectory(blancClient)
