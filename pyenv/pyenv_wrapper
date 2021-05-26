#include "pyenv_wrapper.h"
#include <Python.h>

PyEnvWrapper::PyEnvWrapper() : py_env_(new PyEnv()) {}

PyEnvWrapper::~PyEnvWrapper() {
    delete py_env_;
}

bool PyEnvWrapper::Init() {
    PyThreadState *state = PyEval_SaveThread();

    py_env_->InitEnv();

    PyEval_RestoreThread(state);
	return true;
}
