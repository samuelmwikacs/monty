#include "monty.h"
/**
 * print_stack- a function that prints the value in a stack.
 * @head: head of the node.
 *
 * Return: no of nodes.
*/
size_t print_stack(const stack_t *head)
{
	const stack_t *ptr;
	size_t length;

	length = 0;
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		fflush(stdout);
		length++;
		ptr = ptr->next;
	}
	return (length);
}

/**
 * wrapper_print- a function.
 * @head: parameter.
 * @line_no: parameter.
*/
void wrapper_print(
		stack_t **head, __attribute__((unused)) unsigned int line_no)
{
	print_stack(*head);
}

/**
 * pint- a function that prints the top of a stack.
 * @head: head of the stack.
 * @line_no: parameter.
*/
void pint(stack_t *head, unsigned int line_no)
{
	stack_t *ptr;

	ptr = head;
	if (ptr == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}

/**
 * wrapper_pint- a pint wrapper function.
 * @head: parameter.
 * @line_number: parameter.
*/
void wrapper_pint(stack_t **head, unsigned int line_number)
{
	pint(*head, line_number);
}
