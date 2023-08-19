#include "main.h"
/**
 *  _printfstring - print a string
 * @args: args passed to function
 * Return: len of string
*/
int _printfstring(va_list args)
{
	char *s;
	int i;
	int len;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(nil)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		_putchar(s[i]);
		return (len);
	}
}
