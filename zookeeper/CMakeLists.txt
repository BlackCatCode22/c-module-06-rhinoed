cmake_minimum_required(VERSION 3.30)
project(zookeeper)

set(CMAKE_CXX_STANDARD 20)
# Add the source files
file(GLOB_RECURSE SOURCES
        "${PROJECT_SOURCE_DIR}/src/animals/sources/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/managers/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/utils/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/app/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/main.cpp"
)

# Add the header files
file(GLOB_RECURSE HEADERS
        "${PROJECT_SOURCE_DIR}/src/animals/headers/*.h"
        "${PROJECT_SOURCE_DIR}/src/managers/*.h"
        "${PROJECT_SOURCE_DIR}/src/utils/*.h"
        "${PROJECT_SOURCE_DIR}/src/app/*.h"
)

# Include directories
include_directories(
        "${PROJECT_SOURCE_DIR}/src/animals/headers"
        "${PROJECT_SOURCE_DIR}/src/managers"
        "${PROJECT_SOURCE_DIR}/src/utils"
        "${PROJECT_SOURCE_DIR}/src/app"
)

# Add the executable
add_executable(ZooManager ${SOURCES} ${HEADERS})

# Link libraries if any (e.g., wxWidgets)
find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})
target_link_libraries(ZooManager ${wxWidgets_LIBRARIES})
