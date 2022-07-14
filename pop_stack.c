#include "monty.h"

/**
 * pop- a pop function.
 * @head: parameter.
 * @line_no: parameter.
*/
void pop(stack_t **head, unsigned int line_no)
{
	stack_t *ptr;

	ptr = *head;
	if (*head == NULL)
	{
		fprintf(stderr, "<%u>: can't pop an empty stack\n", line_no);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	(*head)->next->prev = NULL;
	*head = (*head)->next;
	free(ptr);
}

/**
 * wrapper_pop- a wrapper function.
 * @head: parameter.
 * @line_no: parameter.
*/
void wrapper_pop(stack_t **head, unsigned int line_no)
{
	pop(head, line_no);
}
