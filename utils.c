#include <ctype.h>
#include <stdio.h>

/**
 * is_int - check is a string is an integer
 * @str: string to check
 *
 * Return: 1 if is integer or 0 if not
 */
int is_int(char *str)
{
	for ( ; *str; str++)
	{
		if (!isdigit(*str))
			return (0);
	}

	return (1);
}
