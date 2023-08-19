#include "main.h"
/**
 * _printfchar - function print character
 * @args: parameter passed to function
 * Return: 1
*/
int _printfchar(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}
