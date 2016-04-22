#!/bin/bash

rm -rf build
mkdir build/release -p
cd build/release
qmake ../../TemplateProject.pro -r -spec linux-g++
make

cd unit_tests

LD_LIBRARY_PATH=../lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH
echo "EXECUTING THE UNIT TESTS"
./unit_tests
