#!/bin/bash

rm -rf build
rm -rf install

mkdir build
cd build

cmake .. -DCMAKE_INSTALL_PREFIX=../install
make
make install
