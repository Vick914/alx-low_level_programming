
#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num = 0;
	int b;
	int d;

	while (num <= 99)
	{
		b = (num / 10 + '0');
		d = (num % 10 + '0');

		if (b < d)
		{
			putchar(b);
			putchar(d);

			if (num != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++num;
	}
putchar('\n');
return (0);
}
