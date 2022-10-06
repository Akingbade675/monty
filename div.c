#include "monty.h"

/**
 * _div -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *second;

	if (head && head->next)
	{
		if ((head->n) == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
		second = head->next;

		second->n = second->n / head->n;
		second->prev = NULL;

		*stack = second;

		free(head);
		return;
	}

	fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
