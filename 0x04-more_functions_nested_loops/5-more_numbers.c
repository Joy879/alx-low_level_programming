#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int c, i;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
