#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string which length will be returned
 * Return: return length of str
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
