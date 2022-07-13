#include "monty.h"
/**
 * push- a function that pushes a node to the stack.
 * @head: head of the stack.
 * @n: integer.
 *
 * Return: the new node.
*/
extern int global_variable;
stack_t *push(stack_t **head, const int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}

void wrapper_push(stack_t **head, __attribute__((unused)) unsigned int line_no)
{
	push(head, global_variable);
}
