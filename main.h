#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int write_char(char c);
int write_str(char *s);
void write_in_decimal(int number);
void write_unsigned_decimal(unsigned int number);
void write_in_binary(int number);
void write_in_octal(unsigned int number);
void write_in_lower_hex(unsigned int number);
void write_in_upper_hex(unsigned int number);
#endif
