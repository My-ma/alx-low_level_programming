#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: where memory is stored
 *@src: memory which is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int h = n;

	for (; r < h; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
