#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets
 */
void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar (c);
		}
		putchar ('\n');
	}
