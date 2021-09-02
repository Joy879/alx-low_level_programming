#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: Alwys 0 success
 */
void print_triangle(int size)
{
	int x, y, space;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			space = size - y - 1;
			for (x = 0; x < size; x++)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
