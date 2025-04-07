cmake_minimum_required(VERSION 3.30)
project(zookeeper)

set(CMAKE_CXX_STANDARD 20)
find_package(wxWidgets REQUIRED COMPONENTS core base)
add_executable(zookeeper
        App.cpp
        App.h
        Frame.cpp
        Frame.h
        Animal.h
        Animal.cpp
        Parser.h
        Tiger.h
        Tiger.cpp
        Lion.h
        Lion.cpp
        Bear.h
        Bear.cpp
        Hyena.h
        Hyena.cpp
        ZooManager.h
        ZooManager.cpp
        Parser.cpp
)



include("${wxWidgets_USE_FILE}")

target_link_libraries(zookeeper ${wxWidgets_LIBRARIES})
