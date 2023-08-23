#include "main.h"
/**
 *  _printfunsigned - print decemal
 * @args: argument to print
 * Return: number of character printed
*/
int  _printfunsigned(va_list args)
{
	unsigned int num = va_arg(args, int);
	int cpnum, last = num % 10, digit, exp = 1;
	int len = 1;

	num = num / 10;
	cpnum = num;
	if (last < 0)
	{
		_putchar('-');
		cpnum = -cpnum;
		num = -num;
		last = -last;
		len++;
	}
	if (cpnum > 0)
	{
		while (cpnum / 10 != 0)
		{
			exp = exp * 10;
			cpnum = cpnum / 10;
		}
		cpnum = num;
		while (exp > 0)
		{
			digit = cpnum / exp;
			_putchar (digit + '0');
			cpnum = cpnum - (digit * exp);
			exp = exp / 10;
			len++;
		}
	}
	_putchar(last + '0');
	return (len);
}
