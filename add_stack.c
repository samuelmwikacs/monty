#include "monty.h"
/**
 * add- an add function.
 * @head: parameter.
 * @line_no: parameter.
*/
void add(stack_t **head, unsigned int line_no)
{
	stack_t *ptr;
	int result;

	ptr = *head;
	if (ptr == NULL || ptr->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't add, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	result = ptr->n + ptr->next->n;
	ptr->next->n = result;
	ptr->next->prev = NULL;
	*head = ptr->next;
	free(ptr);
}

/**
 * wrapper_add- a wrapper function.
 * @head: parameter.
 * @line_no: parameter.
*/
void wrapper_add(stack_t **head, unsigned int line_no)
{
	add(head, line_no);
}
