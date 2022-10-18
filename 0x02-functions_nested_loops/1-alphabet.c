#include "main.h"

/**
 * print_alphabet - prints all tge alphabet in lower cases
 * written by Dongo
 *
 * Description: Use putchar only twice
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
