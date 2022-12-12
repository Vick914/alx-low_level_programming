
#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int num = 0;
	int b;
	int d;
	int c;

	while (num <= 999)
	{
		b = (num / 100 + '0');
		d = (num / 10 % 10 + '0');
		c = (num % 10 + '0');

		if ((b < d) && (d < c))
		{
			putchar(b);
			putchar(d);
			putchar(c);

			if (num != 789)
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
