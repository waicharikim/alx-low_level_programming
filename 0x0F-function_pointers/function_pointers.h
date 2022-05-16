#ifndef FUNCTION_POINTERS_H
#define FUNCTION_PRINTERS_H
#include <stdlib.h
void print_name(cha *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void(*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
