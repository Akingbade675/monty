#include "monty.h"
#include <ctype.h>

/**
 * pstr -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	(void)(line_number);

	for ( ; head; head = head->next)
	{
		if (!(head->n) || isascii(head->n) == 0)
			break;

		printf("%c", head->n);
	}

	printf("\n");
}
