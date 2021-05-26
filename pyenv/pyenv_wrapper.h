#ifndef PYTHONEVN_PY_ENV_WRAPPER_H
#define PYTHONEVN_PY_ENV_WRAPPER_H

#include "pyenv.h"

class PyEnvWrapper {
public:
    PyEnvWrapper();
    ~PyEnvWrapper();
    bool Init();
private:
    PyEnv *py_env_;
};

#endif //PYTHONEVN_PY_ENV_WRAPPER_H
