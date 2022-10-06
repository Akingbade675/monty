#include "monty.h"

/**
 * mod -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int result;

	if (head && head->next)
	{
		if ((head->n) == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}

		result = head->next->n % head->n;

		pop(stack, line_number);
		(*stack)->n = result;
		return;
	}

	fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
