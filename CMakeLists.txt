cmake_minimum_required(VERSION 2.7)
project(Math)

set(SOURCE_FILES

    Math.cpp

    src/Core/Matrix.h
    src/Core/Matrix.cpp
    src/Core/Vector.h
    src/Core/Vector.cpp

    src/Shapes2D.h
    src/Shapes2D.cpp
    src/Shapes3D.h
    src/Shapes3D.cpp

)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})