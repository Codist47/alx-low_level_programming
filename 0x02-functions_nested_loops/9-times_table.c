#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the time table
 *
 * Return: always 0
 */

void times_table(void)
{
	int a;
	int b;
	int x;
	int sum;
	int chk;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0, x = 1 ; b <= 9 ; b++, x++)
		{
			sum = a * b;
				chk = a * x;
				if (chk > 9 && b != 9)
			printf("%d, ", sum);
			else if (b == 9)
				printf("%d,", sum);
			else
				printf("%d,  ", sum);
		}
		putchar('\n');
	}
}
