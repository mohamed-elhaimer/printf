#include "main.h"
/**
 * _printfhexadecimaluper - print a number hexadecimal upercase
 * @args: arguments
 * Return: len
*/
int _printfhexadecimaluper(va_list args)
{
	int i;
	int *array;
	int len = 0;
	unsigned int num = va_arg(args, int);
	unsigned int cpnum = num;

	while (num != 0)
	{
		num /= 16;
		len++;
	}
	array = malloc(sizeof(int) * len);
	for (i = 0; i < len; i++)
	{
		array[i] = cpnum % 16;
		cpnum /= 16;
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
