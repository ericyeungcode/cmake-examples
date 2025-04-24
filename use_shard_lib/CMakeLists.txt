cmake_minimum_required(VERSION 3.14)

project(hello_client)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE /usr/local/include)
target_link_directories(${PROJECT_NAME} PRIVATE /usr/local/lib)
target_link_libraries(${PROJECT_NAME} cmake_examples_inst)