#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
int i, l = 0;
char *a;
int c;

a = va_arg(val, char *);
if (a == NULL)
a = "(null)";

for (i = 0; a[i] != '\0'; i++)
{

if (a[i] < 32 || a[i] >= 127)
{
_putchar('\\');
_putchar('x');
l = l + 2;
c = a[i];
if (c < 16)
{
_putchar('0');
l++;
}
l = l + _printfhexadecimalup(c);
}
else
{
_putchar(a[i]);
l++;
}
}
return (l);
}
