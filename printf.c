#include "main.h"
#include <stdarg.h>

/**
 * _printf - a function that prints formatted string
 * @format: a string that contain characters and conversion specifiers
 *
 * Return: The number of characters printed (excluding the null byte used to
 * end output to string)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, n, number;
	int count = 0;
	char c;

	va_start(ap, format);
	/* if the format string is Null or is % the program is terminated */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	/* Parsing the format string */
	for (i = 0; format[i] != '\0'; i++)
	{
		c = format[i];
		if (c == '%')
		{
			i++;
			c = format[i];
			switch (c)
			{
				case 'c':
					n = write_char(va_arg(ap, int));
					count += n;
					break;
				case 's':
					n = write_str(va_arg(ap, char *));
					count += n;
					break;
				case '%':
					n = write_char('%');
					count += n;
					break;
				case 'd':
					number = va_arg(ap, int);
					n = write_in_decimal(number);
					count += n;
					break;
				case 'i':
					number = va_arg(ap, int);
					n = write_in_decimal(number);
					count += n;
					break;
				case 'b':
					number = va_arg(ap, int);
					n = write_in_binary(number);
					count += n;
					break;
				case 'u':
					number = va_arg(ap, int);
					n = write_unsigned_decimal(number);
					count += n;
					break;
				case 'o':
					number = va_arg(ap, int);
					n = write_in_octal(number);
					count += n;
					break;
				case 'x':
					number = va_arg(ap, int);
					n = write_in_lower_hex(number);
					count += n;
					break;
				case 'X':
					number = va_arg(ap, int);
					n = write_in_upper_hex(number);
					count += n;
					break;
				case 'S':
					n = write_non_printable_chars_string(va_arg(ap, char *));
					count += n;
					break;
				case 'r':
					n = write_reversed_str(va_arg(ap, char *));
					count += n;
					break;
				case 'R':
					n = write_str_in_rot13(va_arg(ap, char *));
					count += n;
					break;
				case '+':
					number = va_arg(ap, int);
					if (number >= 0)
					{
						write_char('+');
						count += 1;
					}
					n = write_in_decimal(number);
					count += n;
					i++;
					break;
				case ' ':
					number = va_arg(ap, int);
					if (number >= 0)
					{
						write_char(' ');
						count += 1;
					}
					n = write_in_decimal(number);
					count += n;
					i++;
					break;
				case '#':
					number = va_arg(ap, int);
					if (format[i + 1] == 'o')
					{
						write_char('0');
						count += 1;
						n = write_in_octal(number);
						count += n;
					}
					else if (format[i + 1] == 'x')
					{
						write_char('0');
						write_char('x');
						count += 2;
						n = write_in_lower_hex(number);
						count += n;
					}
					else if (format[i + 1] == 'X')
					{
						write_char('0');
						write_char('X');
						count += 2;
						n = write_in_upper_hex(number);
						count += n;
					}
					i++;
					break;
				default:
					n = write_char('%');
					count += n;
					n = write_char(c);
					count += n;
					break;
			}
		}
		else
		{
			n = write_char(c);
			count += n;
		}

	}

	va_end(ap);
	return (count);
}
