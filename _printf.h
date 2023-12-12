#ifndef _PRINTF_H
#define _PRINTF_H

#define CLI 1
#define ONE 1

#include "_string.h"

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - spec-func map
 * @spec: specifier
 * @va_func: function
 *
 * Description: map of char spec to va list
 * parse and print function
 */
typedef struct print {
	char spec;
	int (*va_func)(va_list *args);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);

int helper_hex(const char specifier, unsigned int num);
int helper_int(int num, const int base);
int helper_uint(unsigned int num, const unsigned int base);

int va_bin(va_list *args);
int va_char(va_list *args);
int va_hex_lower(va_list *args);
int va_hex_upper(va_list *args);
int va_int(va_list *args);
int va_oct(va_list *args);
int va_str(va_list *args);
int va_uint(va_list *args);

int (*va_get(char spec))(va_list *args);

#endif /* _PRINTF_H */
