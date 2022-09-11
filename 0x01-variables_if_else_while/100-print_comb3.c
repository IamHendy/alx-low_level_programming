#include<stdio.h>

/**
 * main - prints single digits sterting from zero
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; 1++)
	{
		for (j = 1; jj <= 9; j++)
		{
			if (j > 1)
			{
				putchar(i + 'o');
				putchar(j + 'o');
				if (i != 8)
				{
					putchar(',');
					putchar('');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
