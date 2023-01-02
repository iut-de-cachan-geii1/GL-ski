# Add executable called "GL_exe" that is built from the source files
# The extensions are automatically found.

file(GLOB_RECURSE sources
    "*.cpp"
)

add_library(client STATIC libClient.c)
add_executable(neige_exe ${sources})

target_link_libraries(client -lmingw32 SDL2main SDL2 SDL2_net)
target_link_libraries(neige_exe client)
