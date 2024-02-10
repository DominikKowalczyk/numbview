cmake_minimum_required(VERSION   3.10)
project(numbview)

# Set the C++ standard
set(CMAKE_CXX_STANDARD   14)

# Add the source files
set(SOURCE_FILES
    src/addinbase.cpp
    src/commandmanager.cpp
    src/viewswitchcommand.cpp
    src/configmanager.cpp
    src/globalexceptionhandler.cpp
    src/localizationmanager.cpp
    src/main.cpp
    src/unittests.cpp
    src/userinterface.cpp
    src/utils.cpp
    src/viewswitchlistener.cpp
)

# Add the header files
include_directories(
    include
)

# Create the executable
add_executable(numbview ${SOURCE_FILES})

# Link any necessary libraries
# target_link_libraries(numbview ...)

# Custom target to copy header files to the build directory
file(GLOB HEADER_FILES "include/*.h")
add_custom_target(copy_headers ALL
    DEPENDS ${HEADER_FILES}
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${HEADER_FILES} ${CMAKE_BINARY_DIR}/include
)

# Make sure the headers are copied before the executable is built
add_dependencies(numbview copy_headers)