#include "main.h"

/**
 * print_square - function print a square
 * @size: size of the square
 * Descrition: use '#' to print square
 */

void print_square(int size)
{
	int s, t;

	t = 0;

	if (size < 1)
		_putchar('\n');

	while (t < size)
	{
		s = 0;
		while (s < size)
		{
			_putchar('#');
			s++;
		}
		_putchar('\n');
		t++;
	}
}
