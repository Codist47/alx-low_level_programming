#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @a: function parameter to be checked
 * Return: k
 */

int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;
	return (k);
}
