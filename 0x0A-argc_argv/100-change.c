#include <main.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: length of argv
 * @argv: number of argument*
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};/*Array int*/

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /*Convert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
