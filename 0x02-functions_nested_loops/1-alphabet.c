
#include "main.h"

/**
 * print_alphabet - function that prints lowercased alphabet
 *
 * Returns: return 0 (Success).
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; ++lower)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
