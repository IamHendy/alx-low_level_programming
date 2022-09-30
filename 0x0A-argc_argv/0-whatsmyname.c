#include <stdio.h>

/**
 * main - writes a program that prints its name, followed by a new line.
 *
 * @argc: this is the argument count
 * @argv: thi is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
