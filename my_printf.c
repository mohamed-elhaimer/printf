#include "main.h"
/**
* _printf - my printf
* @format: format for printf
* Return: an int length of string
*/
int _printf(const char *format, ...)
{va_list args;
int j = 0, i, len = 0;

convert tab[] = {{"%%", _printfpercentage},
{"%c", _printfchar}, {"%s", _printfstring},
{"%d", _printfint}, {"%i", _printfint},
{"%b", _printfbin}, {"%u", _printfunsigned},
{"%o", _printfoctal}, {"%x", _printfhexadecimal},
{"%X", _printfhexadecimaluper}, {"%S", printf_exclusive_string}
};

va_start(args, format);
if (format == NULL || _strcmp(format, "") == 0 ||
(format[0] == '%' && format[1] == '\0'))
return (-1);

block:
while (format[j] != '\0')
{
for (i = 0; i < 11; i++)
{
if (tab[i].ptr_spc[0] == format[j] && tab[i].ptr_spc[1] == format[j + 1])
{
len += tab[i].ptr_fun(args);
j = j + 2;

goto block;
}

}
_putchar(format[j]);
len++;
j++;
}
va_end(args);
return (len);
}

