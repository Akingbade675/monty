#include "monty.h"

/**
 * swap -  removes the top element of the stack
 * @stack: address of stack
 * @line_number: current line count
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *second;

	if (head && head->next)
	{
		second = head->next;

		if (second->next)
			second->next->prev = head;

		head->next = second->next;
		head->prev = second;

		second->prev = NULL;
		second->next = head;

		*stack = second;

		return;
	}

	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
