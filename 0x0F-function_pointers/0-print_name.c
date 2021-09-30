#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: string value for name
 * @f: pointer to print function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
