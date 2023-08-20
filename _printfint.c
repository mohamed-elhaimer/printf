#include "main.h"

/**
* _printfint - prints integer
* @args: argument to print
* Return: number of characters printed
*/

int _printfint(va_list args)
{
int num = va_arg(args, int);
int cpnum, lastnum = num % 10;
int digit;
int exp = 1;
int  len = 1;

num = num / 10;
cpnum = num;

if (lastnum < 0)
{
_putchar('-');
cpnum = -cpnum;
num = -num;
lastnum = -lastnum;
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
_putchar(digit + '0');
cpnum = cpnum - (digit *exp);
exp = exp / 10;
len++;
}
}

_putchar(lastnum + '0');

return (len);
}
