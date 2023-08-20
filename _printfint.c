#include "main.h"
/**
 * _printfint - print integer
 * @args: parametres passed to function
 * Return: len
*/
int _printfint(va_list args)
{
int len = 0, n, a, i, *T, negative = 0;

n = va_arg(args, int);
a = n;
if (n < 0)
{
negative = 1;
n = -n;
len++;
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
if (T == NULL)
return (-1);
i = 0;
while (n != 0)
{
T[i] = n % 10;
n = n / 10;
i++;
}
if (negative == 1)
{
T[i] = 45;
}
printt(len, T);
free(T);
return (len);
}
/**
 * printt - print integer
 * @len: len of argument
 * @T: table
 * Return: Nothing
*/
void printt(int len, int *T)
{
	int i;

for (i = len - 1; i >= 0; i--)
{
if (i == len - 1)
_putchar(T[i]);
else
_putchar(T[i] + '0');
}
}
