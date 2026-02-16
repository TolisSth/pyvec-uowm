#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "Vector.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pyvec, m) {
    m.doc() = "pyvec-uowm: Linear Algebra Engine";

    py::class_<Vector>(m, "Vector")
        .def(py::init<std::vector<double>>())
        
        .def_static("print_version", &Vector::print_version)
        
        .def_static("from_points", &Vector::from_points)

	.def("get", &Vector::get)
        
        .def("dim", &Vector::dim)
        
        .def("__repr__", [](const Vector &v) {
            return "<pyvec.Vector dim=" + std::to_string(v.dim()) + ">";
        });
}
