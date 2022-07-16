#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * check_dig- check if a string is an integer.
 * @str: string.
 * Return: 1 if string is an integer, 0 otherwise.
*/
int check_dig(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		if (isdigit(i) == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * split_str- a function that splits a string.
 * @str: string.
 * @line_no: parameter.
 *
 * Return: array of strings.
*/

char **split_str(char *str, unsigned int line_no)
{
	char *token;
	char **s;
	char **ptr;

	s = malloc(2 * sizeof(char *));
	ptr = s;
	token = strtok(str, " ");
	s[0] = token;
	token = strtok(NULL, " ");

	if (token == NULL && (strcmp(s[0], "push") == 0))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}
	else if ((check_dig(token) == 1 && strcmp(s[0], "push") == 0))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}
	else
	{
		s[1] = token;
	}
	return (ptr);
}
/**
 * clean- a function that removes the new line character froma string.
 * @s: string.
 *
*/
void clean(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr == '\n')
		{
			*ptr = '\0';
		}
		ptr++;
	}
}
