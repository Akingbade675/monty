#include "monty.h"

/**
 * pop -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (head)
	{
		if (head->next)
			head->next->prev = NULL;
		*stack = head->next;

		free(head);
		return;
	}

	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
