#include "main.h"

/**
 * _printfhexadecimalup - number
 * @num: an argument
 * Return: longeur
 */
int _printfhexadecimalup(unsigned int num)
{
int i;
int *a;

int counter = 0;
unsigned int temp = num;

while (num / 16 != 0)
{
num /= 16;
counter++;
}
counter++;
a = malloc(counter *sizeof(int));

for (i = 0; i < counter; i++)
{
a[i] = temp % 16;
temp /= 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (a[i] > 9)
a[i] = a[i] + 7;
_putchar(a[i] + '0');
}
free(a);
return (counter);
}
