#include "monty.h"

/**
 * _mul -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *second;

	if (head && head->next)
	{
		second = head->next;

		second->n = head->n * second->n;
		second->prev = NULL;

		*stack = second;

		free(head);
		return;
	}

	fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
