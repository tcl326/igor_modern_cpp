set(PROJECT initial_matrix)

#################### Import the 'io_tools' library here ########################
find_library(IO_TOOLS
             NAMES io_tools
             PATHS ${LIBRARY_OUTPUT_PATH})

message(${IO_TOOLS})

#################### Create a library 'image' below this line ##################
add_library(image image.cpp)

target_link_libraries(image ${IO_TOOLS})

target_include_directories (image PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})