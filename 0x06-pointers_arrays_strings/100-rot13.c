#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int o;
	int p;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (o = 0; s[o] != '\0'; o++)
	{
		for (p = 0; p < 52; p++)
		{
			if (s[o] == data1[p])
			{
				s[o] = datarot[p];
				break;
			}
		}
	}
	return (s);
}
