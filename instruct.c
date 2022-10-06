#include "monty.h"

/**
 * instruction - call the matching function of the opcode
 * @op: opcode
 * @stack: address of the stack
 * @line_num: present line count
 */
void instruction(char *op, stack_t **stack, unsigned int line_num)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{NULL, NULL}
	};

	for (i = 0; opcodes[i].f; i++)
	{
		if (!strcmp(op, opcodes[i].opcode))
		{
			opcodes[i].f(stack, line_num);
			return;
		}
	}

	instruct_error(line_num, op);
}
