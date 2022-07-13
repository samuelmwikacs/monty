#include "monty.h"
/**
 * print_stack- a function that prints the value in a stack.
 * @head: head of the node.
 *
 * Return: no of nodes.
*/
size_t print_stack(const stack_t *head)
{
	stack_t *ptr;
	size_t length;

	length = 0;
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		length++;
		ptr = ptr->next;
	}
	return (length);
}

void wrapper_print(stack_s **head, unsigned int line_no)
{
	print_stack(*head);
}
