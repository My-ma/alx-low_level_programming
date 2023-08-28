#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input here
 * @needle: input here
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *h = needle;

		while (*l == *h && *h != '\0')
		{
			l++;
			h++;
		}

		if (*h == '\0')
			return (haystack);
	}

	return (0);
}
