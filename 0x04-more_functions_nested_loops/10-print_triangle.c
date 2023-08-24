#include "main.h"
/**
 * print_triangle - function prints trinagle, using the charcter #.
 * @size: size of the triangle
 */

void print_tringles(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < hash; index++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
