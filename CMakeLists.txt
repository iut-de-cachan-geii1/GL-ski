cmake_minimum_required(VERSION 3.1)
project (NEIGE C CXX)

add_subdirectory("SDL2")
add_subdirectory("SDL_net")

# Specify where to put all the RUNTIME target files when built.
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if(NOT EXISTS "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/images")
    file(MAKE_DIRECTORY images)
endif()

file(COPY ${CMAKE_SOURCE_DIR}/images DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

# include_directories(SDL2/include SDL2/include/SDL2 SDL2_net/include)
# link_directories(SDL2/lib SDL2_net/lib)
# set(SDL2_LIBRARIES "-lmingw32 -lSDL2main -lSDL2 -lSDL2_net")

# file(GLOB_RECURSE SDL2_SHARED_LIBRARIES
#     "SDL2/bin/*${CMAKE_SHARED_LIBRARY_SUFFIX}"
#     "SDL2_net/bin/*${CMAKE_SHARED_LIBRARY_SUFFIX}"
# )

# foreach(library IN LISTS SDL2_SHARED_LIBRARIES)
#     file(COPY ${library} DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
# endforeach()

add_subdirectory(blancClient)
