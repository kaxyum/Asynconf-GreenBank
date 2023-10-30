cmake_minimum_required(VERSION 3.25)
project(GreenBank)

set(CMAKE_CXX_STANDARD 17)

add_executable(GreenBank main.cpp
)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/SFML/lib/cmake/SFML")
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(c:/SFML/include)
target_link_libraries(GreenBank sfml-system sfml-window sfml-graphics sfml-audio)