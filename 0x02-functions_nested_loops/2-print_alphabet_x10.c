
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	char lower, i;

	for (i = 1; i <= 10; ++i)
	{
		for (lower = 'a'; lower <= 'z'; ++lower)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
