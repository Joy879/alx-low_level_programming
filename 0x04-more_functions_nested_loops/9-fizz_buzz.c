#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int i;
	for (i = 1; 1 <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz\t");
		else if ((i % 3) == 0)
			 printf("Fizz\t");
		else if (( i % 5) == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	}
	return (0);
}
