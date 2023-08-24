#include "main.h"

/**
 * printfHEXaux - prints an hexgecimal number
 * @n: number to print
 * Return: len
 */
int printfHEXaux(unsigned int n)
{
	int i;
	int *array;
	int len = 0;
	unsigned int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		len++;
	}
	len++;
	array = malloc(sizeof(int) * len);

	for (i = 0; i < len; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (len);
}
