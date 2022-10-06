#include "monty.h"

/**
 * pstr -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *head = *stack;

	for ( ; head; head = head->next)
	{
		if (head->n <= 0 || head->n > 127)
			break;

		printf("%c", head->n);
	}

	putchar('\n');
}
