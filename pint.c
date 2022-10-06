#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @stack: address of stack
 * @line_number: current line count
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		printf("%d\n", (*stack)->n);
		return;
	}

	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
