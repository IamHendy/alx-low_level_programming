#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a' <= 'z'; j++)
		{
			putchar (j);
		}
		putchar ('\n');
	}
