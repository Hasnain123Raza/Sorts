# SORTS

## Introduction

Sorts is a project in the C programming language that attempts to capture the most common comparison sorting algorithms. It is meant as an exercise to revise sorting algorithms, autotools, and to learn about general professional programming practices such as documentation and unit testing (although the testing is trivial in this case).

## Building and Installing

The project builds and installs a static library and its header that contains all of the sorting algorithms currently implemented. To build the program navigate to the root directory and run `mkdir build && cd build` to create a build directory and go into it. After that run `../configure` to run autotools configurations. This will generate a Makefile in the build directory that you can use you build or install the project.

Run `make` to make the project. This should generate the `libsorts.a` file in your build directory if everything goes right (there will be a lot of other files and directories too). To install, run `make install` and to uninstall run `make uninstall`. After installation, you can use this library in your own C programs by doing `#include <sorts.h>`.