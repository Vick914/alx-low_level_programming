
#include "main.h"

/**
 * jack_bauer - Check Main
 * Description: function prints every minute in one day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; ++H)
	{
		for (M = 0; M < 60; ++M)
		{
			_putchar((H / 10) + 48);
			_putchar((H % 10) + 48);
			_putchar(':');
			_putchar((M / 10) + 48);
			_putchar((M % 10) + 48);
			_putchar('\n');
		}
	}
}
