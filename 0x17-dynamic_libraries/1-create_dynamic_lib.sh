#!/bin/bash
gcc-4.8 -Wall -pedantic -Werror -Wextra -c -fpic *.c
gcc-4.8 -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
