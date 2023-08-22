#include "main.h"
/**
 * _printfbin - print a number to binary
 * @args: argument
 * Return: 1
*/
int _printfbin(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);
	int i = 0;
	int binary[32];
	int j;

	if (n == 0)
	{
		putchar(0);
		return (1);
	}
	while (n != 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (binary[j] == 1)
		_putchar(49);
		else
		_putchar(48);
	}
	return (i);
}
