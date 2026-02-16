# Author: Apostolos Chalis 2026 <cs05414@uowm.gr> 
from setuptools import setup, Extension
import pybind11
import os

functions_module = Extension(
    'pyvec',
    sources=['src/Vector.cpp', 'src/bindings.cpp'],
    include_dirs=[pybind11.get_include(), 'include'],
    language='c++',
    extra_compile_args=['-std=c++20'],
)

setup(
    name='pyvec',
    version='1.0',
    ext_modules=[functions_module],
    zip_safe=False,
)
