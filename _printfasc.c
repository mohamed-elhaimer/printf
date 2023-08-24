#include "main.h"
/**
 * printfexclusivestring - print exclusuives string
 * @args: argumen t
 * Return: the length of the string
 */

int printfexclusivestring(va_list args)
{
	char *s;
	int i, len = 0;
	unsigned int cast;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = (unsigned int)s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printfHEXaux(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
