#include "main.h"

/**
 * print_alphabet - print lowercase alphabets
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
