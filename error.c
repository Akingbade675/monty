#include "monty.h"

/**
 * usage_error - prints error to standard error
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_error - prints error to standard error
 * @err: error message
 */
void file_error(char *err)
{
	fprintf(stderr, "Error: Can't open file %s\n", err);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - prints error to standard error
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * arg_error - prints error to standard error
 * @line_numb: line count
 */
void arg_error(unsigned int line_numb)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_numb);
	exit(EXIT_FAILURE);
}

/**
 * instruct_error - prints error to standard error
 * @line_num: line count
 * @opcode: opcode in the monty file
 */
void instruct_error(unsigned int line_num, char *opcode)
{

	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
	exit(EXIT_FAILURE);
}
