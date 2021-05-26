set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(pyenv_src
        py_env.cpp
        py_env_wrapper.cpp
        pyenv_def.cpp)

add_library(pyenv_obj OBJECT ${pyenv_src})

set(CMAKE_SKIP_BUILD_RPATH TRUE)
add_library(pyenv SHARED $<TARGET_OBJECTS:pyenv_obj>)
target_link_libraries(pyenv "-Wl,-rpath,$ORIGIN" boost_python3 ${PYTHON_LIBRARIES} pthread dl)
