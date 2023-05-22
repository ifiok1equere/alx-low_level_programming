#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89 *.c; gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.o -shared -o liball.so
