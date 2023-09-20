#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
int _printf(const char *format, ...);
int write_char(unsigned char c);
int write_str(const char *s);
int write_in_decimal(long int number);
int write_unsigned_decimal(unsigned int number);
int write_in_binary(unsigned int number);
int write_in_octal(unsigned int number);
int write_in_lower_hex(unsigned int number);
int write_in_upper_hex(unsigned int number);
int write_non_printable_chars_string(char *s);
int write_reversed_str(const char *s);
int write_str_in_rot13(const char *s);
#endif
