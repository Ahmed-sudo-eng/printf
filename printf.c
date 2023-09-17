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
	int i;
	int n;
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
