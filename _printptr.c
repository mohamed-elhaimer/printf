#include "main.h"

/**
 * printfptr - p
 * @args: arg
 * Return: count
 */
int printfptr(va_list args)
{
	void *ptr;
	char *str = "(nil)";
	long int num;
	int b;
	int i;


	ptr = va_arg(args, void*);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{

			_putchar(str[i]);

		}
		return (i);
	}

	num = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');
	b = printfhexaux(num);
	b += 2;
	return (b);
}
