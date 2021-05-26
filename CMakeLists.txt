cmake_minimum_required(VERSION 3.8)

project(pythonevn VERSION 0.1.0)
message(${PROJECT_NAME} "-" ${PROJECT_VERSION})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -D_GLIBCXX_USE_CXX11_ABI=0 ${CMAKE_CXX_FLAGS}")
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--no-undefined")

include_directories(${PYTHON_INCLUDE_DIRS})

include_directories(3rdparty/include)
link_directories(3rdparty/lib)
include_directories(pyenv)

add_subdirectory(pyenv)
