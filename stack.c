#include "monty.h"

/**
 * free_stack - free the whole stack
 * @stack: address of stack
 */
void free_stack(stack_t *stack)
{
	stack_t *cur = stack;
	stack_t *next = NULL;

	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}

/**
 * add_stack - adds a new element to the top of a stack
 * @stack: address of stack
 */
void add_stack(stack_t **stack)
{
	stack_t *new, *hstack = *stack;
	char *argument = global.argument;

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

/**
 * add_queue - adds a new element to the end of a stack
 * @stack: address of stack
 */
void add_queue(stack_t **stack)
{
	stack_t *new, *hstack = *stack;
	char *argument = global.argument;

	new = malloc(sizeof(*new));
	if (!new)
	{
		malloc_error();
	}

	new->n = atoi(argument);
	new->next = NULL;
	global.argument = NULL;

	for ( ; hstack; hstack = hstack->next)
	{
		if (!(hstack->next))
		{
			hstack->next = new;
			new->prev = hstack;
			return;
		}
	}

	new->prev = NULL;
	*stack = new;
}
