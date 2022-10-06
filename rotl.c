#include "monty.h"

/**
 * rotl -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *tail = *stack;

	(void) line_number;
	if (head && head->next)
	{
		for ( ; tail->next; tail = tail->next)
			;

		tail->next = head;
		head->prev = tail;

		*stack = head->next;

		(*stack)->prev = NULL;
		head->next = NULL;
	}
}
