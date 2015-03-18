#!/bin/sh

INSTALL_PREFIX=~/local

rm -fR $INSTALL_PREFIX/include/util
rm -fR $INSTALL_PREFIX/include/mpi2
cd build
cmake -DCMAKE_BUILD_TYPE=NativeRelease -DCMAKE_INSTALL_PREFIX=$INSTALL_PREFIX ../
make install
cd ..
