
#include <boost/python.hpp>
#include "py_env_wrapper.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(libpyenv) {
    bp::class_<PyEnvWrapper>("Pyenv")
            .def("init", &PyEnvWrapper::Init);
}
