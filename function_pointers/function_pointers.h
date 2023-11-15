#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
