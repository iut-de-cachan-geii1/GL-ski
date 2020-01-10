# Add executable called "GL_exe" that is built from the source files
# The extensions are automatically found.

file(GLOB_RECURSE sources
    "*.c"
)

add_executable(neige_exe ${sources})
target_link_libraries(neige_exe ${SDL2_LIBRARIES})
