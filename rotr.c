#include "monty.h"

/**
 * rotr -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *tail = *stack;

	(void)(line_number);

	if (head && head->next)
	{
		for ( ; tail->next; tail = tail->next)
			;

		tail->next = head;
		tail->prev->next = NULL;
		tail->prev = NULL;
		head->prev = tail;

		*stack = tail;
	}
}
