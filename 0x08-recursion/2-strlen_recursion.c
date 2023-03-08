#include "main.h"

/**
 * _strlen_recursion - functions that returns length of string
 * @s: string to be input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
