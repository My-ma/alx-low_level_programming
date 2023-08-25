#include "main.h"
/**
 * puts2 - function prints one character out of two
 * starts with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int j = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	j = longi - 1;
	for (o = 0 ; o <= j ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
