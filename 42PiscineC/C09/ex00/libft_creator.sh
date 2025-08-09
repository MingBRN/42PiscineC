#!/bin/sh

cc -c -Wall -Wextra -Werror *.c
ar cr libft.a *.o