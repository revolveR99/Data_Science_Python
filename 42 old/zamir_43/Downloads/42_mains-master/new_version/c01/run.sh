#!/bin/sh
main=$(find . -name '*main.c')
files=$(find ex*/ -name '*.c')
count=$(find ex*/ -name '*.c' | wc -l)
export FILES_COUNT=$count
norminette -R CheckForbiddenSourceHeader $files
cc -Wall -Wextra -Werror $main $files
./a.out
