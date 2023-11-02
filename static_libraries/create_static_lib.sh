#!/bin/bash

library_name="liball.a"

source_files=$(ls *.c)

gcc -c $source_files

ar rcs $library_name *.o
