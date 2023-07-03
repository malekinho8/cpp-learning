#include <pybind11/pybind11.h> // why do we need this? --> to use pybind11 for binding C++ and Python. Why do we use <> notation? --> to include header files from the standard library. If we didn't use <> notation, we would have to specify the path to the header file.
#include <pybind11/stl.h> // why do we need this? --> to use vector as argument type

namespace py = pybind11; // why do we use this? --> to shorten the namespace. In python, this is like using "as" keyword.

std::vector<int> add(py::list x, py::list y){ // why do we use :: notation and not -> notation? --> Because we are using the scope resolution operator to access the function in the pybind11 namespace. What is a scope resolution operator? --> A scope resolution operator is used to define the scope of a function or variable. What is a scope? --> A scope is a region of the program where a defined variable can have its existence and beyond that variable it cannot be accessed. What is a namespace? --> A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. What is a declarative region? --> A declarative region is a part of the program where names can be defined. What is the equivalent of a namespace in Python? --> A module is the equivalent of a namespace in Python. What is the equivalent of a scope in Python? --> A scope in Python is the region where a namespace is directly accessible. For example, the global scope is the region where the global namespace is directly accessible. What is the difference between -> and :: in C++? -->   

}

