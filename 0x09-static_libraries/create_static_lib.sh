#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.ci
ar -rc liball.a *.o
