#include "monty.h"
#include <stdio.h>
/**
 * main- the main function.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: 1 if successful.
*/

int global_varable;

int main(int argc, char **argv)
{
	FILE *fp;
	unsigned int line_no;
	char buff[32], **line;
	stack_t *head;
	int global_variable;
	instruction_t array[] = {
		{"push", push},
		{"pall", print_stack},
		{NULL, NULL}
	};

	line_no = 0;
	head = NULL;
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
	while (fgets(buff, 32, fp) != NULL)
	{
		clean(buff);
		line_no++;
		line = split_str(buff);
		global_variable = atoi(line[1]);

		for (i = 0; array[i].opcode; i++)
		{
			if (strcmp(line[0], array[i].opcode) == 0)
			{
				array[i].f(&head, line_no);
			}
			else
			{
				fprintf("L<%u>: unknown instruction <%s>\n", line_no, line[0]);
				exit(EXIT_FAILURE);
			}
		}
	}
	fclose(fp);
	free(line);
	return (1);

}
