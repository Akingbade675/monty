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
		{"add", _add},
		{"nop", nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	if (!strcmp(op, "stack"))
	{
		global.isstack = 1;
		return;
	}
	if (!strcmp(op, "queue"))
	{
		global.isstack = 0;
		return;
	}

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
