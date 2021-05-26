#include "py_env.h"
#include <Python.h>
#include <iostream>

bool PyEnv::InitEnv() {
    Py_Initialize();
    PyEval_InitThreads();

    PyThreadState *state = PyThreadState_Swap(NULL);
    if (state) {
        PyThreadState_Swap(state);
        (void *)PyEval_SaveThread();
    }
    std::cout << "python env inited!" << std::endl;
    return true;
}
