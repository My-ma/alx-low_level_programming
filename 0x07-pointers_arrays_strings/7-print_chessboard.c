#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int o;
	int r;

	for (o = 0; o < 8; o++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[o][r]);
		_putchar('\n');
	}
}
