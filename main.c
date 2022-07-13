#include "monty.h"
#include <stdio.h>
/**
 * main- the main function.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: 1 if successful.
*/
int main(int argc, char **argv)
{
	FILE *fp;
	int line_no;
	instruction_t array[] = {
		{"push", },
		{"pall", print_stack},
		{NULL, NULL}
	};
	
	line_no = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf("Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);
	}

}
