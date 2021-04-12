add_subdirectory(igg_image)

add_executable(run main.cpp)

target_link_libraries(run LINK_PUBLIC image)