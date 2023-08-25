#include "main.h"

/**
 * printfhexaux - print
 * @n: arg
 * Return: c
 */
int printfhexaux(unsigned long int n)
{
	long int i;
	long int *a;
	long int c = 0;
	unsigned long int t = n;


	while (n / 16 != 0)
	{
		n /= 16;
		c++;
	}
	c++;
	a = malloc(c * sizeof(long int));

	for (i = 0; i < c; i++)
	{
		a[i] = t % 16;
		t /= 16;

	}
	for (i = c - 1; i >= 0; i--)
	{
		if (a[i] > 9)
			a[i] = a[i] + 39;
		_putchar(a[i] + 48);
	}
	free(a);
	return (c);
}
