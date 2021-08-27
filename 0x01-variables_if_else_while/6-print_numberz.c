#include <stdio.h>
/**
 * main - prints numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');
	return (0);
}
