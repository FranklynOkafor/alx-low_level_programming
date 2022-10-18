#include "main.h"

/**
 * print_alphabet_x10 - print 10 time the alphabet in lower case
 * written by Dongo
 *
 * Avoid uing more than two putchars
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
