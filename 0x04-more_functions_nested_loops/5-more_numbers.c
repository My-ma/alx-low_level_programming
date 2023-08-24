#include "main.h"

/**
 * more_numbers - function prints 10 times the numbers, from 0 to 14
 * continue by a new line
 */

void more_numbers(void)
{
int q, r;

for (q = 0; q < 10; q++)
{
	for (r = 0; r < 15; r++)
	{
		if (r >= 10)
		_putchar(r / 10 + '0');
		_putchar(r % 10 + '0');
	}
	_putchar('\n');
}
}
