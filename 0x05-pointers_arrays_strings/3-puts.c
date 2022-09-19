#include "main.h"
#include "stdio.h"

/**
 * _puts - prints a string
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	int i = 0;

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
