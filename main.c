#include "monty.h"
#include <stdio.h>
/**
 * main- the main function.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: 1 if successful.
*/

int global_variable;

int main(int argc, char **argv)
{
	FILE *fp;
	int i, flag;
	unsigned int line_no;
	char buff[32], **line;
	stack_t *head;
	instruction_t array[] = {
		{"push", wrapper_push},
		{"pall", wrapper_print},
		{"pint", wrapper_pint},
		{"pop", wrapper_pop},
		{"swap", wrapper_swap},
		{NULL, NULL}
	};

	line_no = 0;
	head = NULL;
	error_check(&argc);
	fp = fopen(argv[1], "r");
	error_check2(fp, argv[1]);
	while (fgets(buff, 32, fp) != NULL)
	{
		flag = 0;
		clean(buff);
		line_no++;
		if (strlen(buff) == 0)
			continue;
		line = split_str(buff, line_no);
		global_variable = atoi(line[1]);
		for (i = 0; array[i].opcode != NULL; i++)
		{
			if (strcmp(line[0], array[i].opcode) == 0)
			{
				array[i].f(&head, line_no);
				flag = 1;
			}
		}
		check_flag(flag, &line_no, line[0]);
	}
	fclose(fp);
	free(line);
	return (1);
}
