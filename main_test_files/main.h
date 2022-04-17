#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int ret_char(va_list arg);

typedef struct TypeStruct
{
    char *t;

    int (*out)(va_list);

} TypeStruct;

#endif
