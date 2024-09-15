cmake_minimum_required(VERSION 3.10)
project(MySFMLApp)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SFML package
set(SFML_DIR "C:\\Users\\natha\\Documents\\code\\c++ libs\\SFML-2.6.1\\lib\\cmake\\SFML")

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Add the executable
add_executable(MySFMLApp src/main.cpp)

# Link SFML libraries
target_link_libraries(MySFMLApp sfml-graphics sfml-window sfml-system)