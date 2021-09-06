#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: pointer to char
 * Return: Always zero
 */
void print_rev(char *s)
{
	int x;
	int len;

	for (len = 0; s[len] != '\0'; ++len)
	{
		for (x = len - 1; x >= 0; x--)
		{
			_putchar(s[x]);
		}
	}
	_putchar('\n');
}
