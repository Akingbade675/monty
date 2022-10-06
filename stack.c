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
