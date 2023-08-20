#include "main.h"
/**
 *_printint - print integer
 *@args: parametres passed to function
 *Return: len
 */

int _printfint(va_list args)
{
int len = 0, n, a, i;
int *T;

n = va_arg(args, int);
a = n;
if (n < 0)
{
_putchar('-');
n = -n;
}

else if (n == 0)
{
_putchar('0');
return (1);
}

while (a != 0)
{
len++;
a = a / 10;
}

T = (int *)malloc(sizeof(int) * len);

i = 0;

while (n != 0)
{
T[i] = n % 10;
n = n / 10;
i++;
}

for (i = len - 1; i >= 0; i--)
{
_putchar(T[i] + '0');
}
return (len);
}
