#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for value
 *
 *
 * Return: Always to 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);

	return (0);
}
