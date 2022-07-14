#include "monty.h"
/**
 * swap- sawp top two elements of a stack.
 * @head: head of the stack.
 * @line_no: parameter.
*/
void swap(stack_t **head, unsigned int line_no)
{
	stack_t *ptr, *first, *second, *temp;

	ptr = *head;
	if (ptr == NULL || ptr->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't swap, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	first = ptr;
	second = ptr->next;
	second->next = first;
	first->prev = second;
	first->next = NULL;
	second->prev = NULL;
	*head = second;
}

/**
 * wrapper_swap- a wrapper for the swap function.
 * @head: parameter.
 * @line_no: parameter.
 *
*/
void wrapper_swap(stack_t **head, unsigned int line_no)
{
	swap(head, line_no);
}
