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
					write_in_decimal(number);
					break;
				case 'i':
					number = va_arg(ap, int);
					write_in_decimal(number);
					break;
				case 'b':
					number = va_arg(ap, int);
					write_in_binary(number);
					break;
				case 'u':
					number = va_arg(ap, int);
					write_unsigned_decimal(number);
					break;
				case 'o':
					number = va_arg(ap, int);
					write_in_octal(number);
					break;
				case 'x':
					number = va_arg(ap, int);
					write_in_lower_hex(number);
					break;
				case 'X':
					number = va_arg(ap, int);
					write_in_upper_hex(number);
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
