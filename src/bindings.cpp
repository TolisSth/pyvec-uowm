#include <pybind11/pybind11.h>
#include "Vector.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pyvec, m) {
    m.doc() = "pyvec-uowm: Linear Algebra Engine ";

    py::class_<Vector>(m, "Vector")
        .def_static("print_version", &Vector::print_version);
}
