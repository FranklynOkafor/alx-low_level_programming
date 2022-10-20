#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 * Description: You can only use _putchar twice in your code
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
