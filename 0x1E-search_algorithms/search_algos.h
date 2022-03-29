#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, size_t l, size_t r);
int jump_search(int *array, size_t size, int value);
int binary_search_helper(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);


#endif /*SEARCH_ALGOS*/
