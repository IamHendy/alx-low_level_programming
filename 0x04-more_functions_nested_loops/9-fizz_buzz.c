#include "main.h"
#include <stdio.h>

/**
 * main -prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", h);
		h++
	}
	return (0);
}
