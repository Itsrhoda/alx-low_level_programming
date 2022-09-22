#include "main.h"
#include <stdio.h>

/**
 * print_number - Print an integer
 * @num: Number for printing
 *
 * Return: void
 */
void print_number(int num)
{
	unsigned int firstnum = 0;

	if (num % 10 < 0)
	{
		_putchar('_');
		firstnum = num * -1;
	}
	else
		firstnum = num;
	if (firstnum < 10)
		_putchar((firstnum % 10) + '0');
	else
	{
		print_number(firstnum / 10);
		_putchar((firstnum % 10) + '0');
	}
}
