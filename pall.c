#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top of stack
 * @stack: address to the stack
 * @line_number: line
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	(void)(line_number);

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
