#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
* struct form - struct for format
* @ptr_spc: pointer to specifier
* @ptr_fun: pointer to function
*/
typedef struct form
{
char *ptr_spc;
int (*ptr_fun)();
} convert;

int _putchar(char c);
int _printfchar(va_list args);
int _printfstring(va_list args);
int _printfpercentage(void);
int _strlen(char *s);
int _printf(const char *format, ...);
int _strcmp(const char *s1, char *s2);
int _printfint(va_list args);
int _printfbin(va_list args);
int  _printfunsigned(va_list args);
int _printfoctal(va_list args);
int _printfhexadecimal(va_list args);
int _printfhexadecimaluper(va_list args);
int printfexclusivestring(va_list val);
int printfHEXaux(unsigned int num);
int printfhexaux(unsigned long int n);
int printfptr(va_list args);

#endif
