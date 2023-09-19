#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int write_char(char c);
int write_str(char *s);
int write_in_decimal(signed int number);
int write_unsigned_decimal(unsigned int number);
int write_in_binary(unsigned int number);
int write_in_octal(unsigned int number);
int write_in_lower_hex(unsigned int number);
int write_in_upper_hex(unsigned int number);
int write_non_printable_chars_string(char *s);
#endif
