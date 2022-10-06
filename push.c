#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: address of stack
 * @line_number: line count
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *argument = global.argument;

	if (!argument || !(is_int(argument)))
		arg_error(line_number);

	if (global.isstack)
		add_stack(stack);
	else
		add_queue(stack);
}
