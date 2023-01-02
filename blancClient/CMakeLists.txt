# Copy user libraries into the build folder
# if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/lib" AND IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib")
#     file(GLOB_RECURSE libraries
#         "lib/*${CMAKE_SHARED_LIBRARY_SUFFIX}"
#         "lib/*${CMAKE_STATIC_LIBRARY_SUFFIX}"
#     )

#     foreach(library IN LISTS libraries)
#         file(COPY ${library} DESTINATION ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
#     endforeach()

#     file(GLOB_RECURSE libraries
#         "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/*${CMAKE_SHARED_LIBRARY_SUFFIX}"
#         "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/*${CMAKE_STATIC_LIBRARY_SUFFIX}"
#     )
# endif()

# Add include directories to the build.
include_directories (include)

# Recurse into the "src" subdirectory. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.
add_subdirectory (src)
