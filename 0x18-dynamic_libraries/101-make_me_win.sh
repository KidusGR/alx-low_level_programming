#!/bin/bash
wget -O /tmp/nrandom.so https://raw.github.com/kidusgr/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
