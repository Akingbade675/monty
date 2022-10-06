#include "monty.h"

/**
 * pchar - removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (head)
	{
		if (head->n > 127 || head->n < 0)
		{
			fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
			exit(EXIT_FAILURE);
		}

		printf("%c\n", head->n);
		return;
	}

	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
