#include "main.h"
/**
 * _printfoctal - print a number octal
 * @args: arguments
 * Return: len
*/
int _printfoctal(va_list args)
{
	int len = 0;
	int i;
	int *array;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int cpnum = num;

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}
	while (num != 0)
	{
		num /= 8;
		len++;
	}
	array = (int *)malloc(sizeof(int) * len);
	for (i = 0; i < len; i++)
	{
		array[i] = cpnum % 8;
		cpnum /= 8;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(array[i] + 48);
	}
	free(array);
	return (len);
}
