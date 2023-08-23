#include "main.h"
/**
 * _printfhexadecimal - print a number hexadecimal
 * @args: arguments
 * Return: len
*/
int _printfhexadecimal(va_list args)
{
	int i;
	int *array;
	int len = 0;
	unsigned int num = va_arg(args, int);
	unsigned int cpnum = num;

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}
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
		array[i] = array[i] + 39;
		_putchar(array[i] + 48);
	}
	free(array);
	return (len);
}
