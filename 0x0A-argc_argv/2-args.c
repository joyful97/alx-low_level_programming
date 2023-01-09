#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments separated bey the new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return : Always 0 success
 */
int main(int argc, char **argv)
{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
	        number++;
		(*argv)++;
	}

	return (0);


}
