#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input here
 * @size: input here
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, u;

	sum1 = 0;
	sum2 = 0;

	for (u = 0; u < size; u++)
	{
		sum1 = sum1 + a[u * size + u];
	}

	for (u = size - 1; u >= 0; u--)
	{
		sum2 += a[u * size + (size - u - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
