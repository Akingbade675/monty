#define  _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argv: list of argument passed to the program
 * @argc: argument count
 *
 * Return: exit
 */
int main(int argc, char **argv)
{
	FILE *file = NULL;
	char *buffer = NULL, *op = NULL;
	size_t buffer_size = 7;
	stack_t *head = NULL;
	unsigned int line_cnt = 1;

	global.argument = NULL;

	if (argc != 2)
		usage_error();

	file = fopen(argv[1], "r");
	if (!file)
		file_error(argv[1]);

	while ((getline(&buffer, &buffer_size, file)) != (-1))
	{
		if (*buffer == '\n')
		{
			line_cnt++;
			continue;
		}

		op = strtok(buffer, " \t\n");
		if (!op || *op == '#')
		{
			line_cnt++;
			continue;
		}

		global.argument = strtok(NULL, " \t\n");
		instruction(op, &head, line_cnt);
		line_cnt++;
	}

	free(buffer);
	free_stack(head);
	fclose(file);

	exit(EXIT_SUCCESS);
}
