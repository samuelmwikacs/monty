#include "monty.h"
#include <stdio.h>
/**
 * error_check- an error check function.
 * @argc: parameter.
*/
void error_check(int *argc)
{
	if (*argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * error_check2- an error check function.
 * @ptr: a file pointer.
 * @str: a string.
*/
void error_check2(FILE *ptr, char *str)
{
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", str);
		exit(EXIT_FAILURE);
	}
}

/**
 * check_flag- an error check function.
 * @flag: parameter.
 * @ptr: parameter.
 * @str: str.
*/
void check_flag(int flag, unsigned int *ptr, char *str)
{
	if (flag == 0)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", *ptr, str);
		exit(EXIT_FAILURE);
	}
}
