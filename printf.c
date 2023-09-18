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
	int number;
	int dn;	/* digits number */
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
					dn = digits_counter(number);
					count += dn;
					switch (dn)
					{
						case 1:
							write_one_digit(number);
							break;
						case 2:
							write_two_digits(number);
							break;
						case 3:
							write_three_digits(number);
							break;
						case 4:
							write_four_digits(number);
							break;
						case 5:
							write_five_digits(number);
							break;
						case 6:
							write_six_digits(number);
							break;
						case 7:
							write_seven_digits(number);
							break;
						case 8:
							write_eight_digits(number);
							break;
						case 9:
							write_nine_digits(number);
							break;
						case 10:
							write_ten_digits(number);
							break;
					}
					break;
				case 'i':
					number = va_arg(ap, int);
					dn = digits_counter(number);
					count += dn;
					switch (dn)
					{
						case 1:
							write_one_digit(number);
							break;
						case 2:
							write_two_digits(number);
							break;
						case 3:
							write_three_digits(number);
							break;
						case 4:
							write_four_digits(number);
							break;
						case 5:
							write_five_digits(number);
							break;
						case 6:
							write_six_digits(number);
							break;
						case 7:
							write_seven_digits(number);
							break;
						case 8:
							write_eight_digits(number);
							break;
						case 9:
							write_nine_digits(number);
							break;
						case 10:
							write_ten_digits(number);
							break;
					}
					break;
				case 'b':
					number = va_arg(ap, int);
					write_in_binary(number);
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
