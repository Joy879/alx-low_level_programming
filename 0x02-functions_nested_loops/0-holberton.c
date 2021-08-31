#include "main.h"
/**
 * main - prints Holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "Holberton";
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
