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
void printt(int len, int *T);
#endif
