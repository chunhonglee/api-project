# Adding Boost library
find_package(Boost REQUIRED)

# Adding the sub-directory module
add_subdirectory(module)

# Creating an executable of the main.cpp
add_executable(main main.cpp)

# Linking the example library in the module sub-directory to the main executable
target_link_libraries(main example)
target_link_libraries(main Boost::headers)
