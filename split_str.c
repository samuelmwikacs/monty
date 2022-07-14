#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * split_str- a function that splits a string.
 * @str: string.
 *
 * Return: array of strings.
*/

char **split_str(char *str)
{
	char *token;
	char **s;
	char **ptr;

	s = malloc(2 * sizeof(char *));
	ptr = s;
	token = strtok(str, " ");
	s[0] = token;
	token = strtok(NULL, " ");
	if (token == NULL)
	{
		s[1] = "0";
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
