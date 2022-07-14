#ifndef MAIN_H_
#define MAIN_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int global_variable;
/**
 * struct stack_s - doubly linked list representation of a stack
 * (or queue).
 * @n: integer
 * @prev: points to the previous element of the stack (or queue).
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char **split_str(char *str, unsigned int line_no);
void clean(char *s);
stack_t *push(stack_t **head, const int n);
void wrapper_push(stack_t **head, unsigned int line_no);
size_t print_stack(const stack_t *head);
void wrapper_print(stack_t **head, unsigned int line_no);
void check_flag(int flag, unsigned int *ptr, char *str);
void error_check2(FILE *ptr, char *str);
void error_check(int *argc);
int check_dig(char *str);
void pint(stack_t *head, unsigned int line_no);
void wrapper_pint(stack_t **head, unsigned int line_number);
void pop(stack_t **head, unsigned int line_no);
void wrapper_pop(stack_t **head, unsigned int line_no);

#endif
