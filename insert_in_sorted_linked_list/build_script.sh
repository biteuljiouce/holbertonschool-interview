#!/bin/bash

#if [ $# -lt 1 ]; then
#    echo "Usage: $0 <filename>"
#    exit 1
#fi

#first_char=${1:0:1}

# Compilation avec gcc

#gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1.c" "$first_char"-main.c xxx.c -o build/"$1" && ./build/"$1"
gcc-4.8 -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c linked_lists.c 0-insert_number.c -o ./build/insert_number && ./build/insert_number

# check style and doc
./tools/betty-doc.pl "0-insert_number.c"
./tools/betty-style.pl "0-insert_number.c"
