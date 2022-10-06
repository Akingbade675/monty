#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: address of stack
 * @line_number: line count
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *hstack = *stack;
	char *argument = global.argument;

	if (!argument || !(is_int(argument)))
		arg_error(line_number);

	new = malloc(sizeof(*new));
	if (!new)
	{
		malloc_error();
	}

	new->n = atoi(argument);
	global.argument = NULL;
	new->prev = NULL;
	new->next = hstack;

	if (hstack)
		hstack->prev = new;
	*stack = new;
}
