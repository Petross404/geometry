cmake_minimum_required(VERSION 3.0)

project(geometry CXX)
set (CMAKE_CXX_STANDARD 17)

set(SOURCE
    "${PROJECT_SOURCE_DIR}/main.cpp"
    "${PROJECT_SOURCE_DIR}/shape.cpp"
    "${PROJECT_SOURCE_DIR}/rectangle.cpp"
    "${PROJECT_SOURCE_DIR}/space.cpp"
    )

add_executable(${PROJECT_NAME} ${SOURCE})
