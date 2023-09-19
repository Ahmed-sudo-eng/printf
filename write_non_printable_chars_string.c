#include "main.h"
#include <unistd.h>

/**
 * write_non_printable_chars_string - a function that prints normally but
 * it does not print non printable characters and print \x followed by hex
 * value of it
 * @s: The string to be printed
 *
 * Return: The number of characters printed
 */
int write_non_printable_chars_string(char *s)
{
	char c;
	char a;
	int i;
	int count;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if (c < 32 || c >= 127)
		{
			a = 92;
			write(1, &a, 1);
			a = 120;
			write(1, &a, 1);
			if (c < 16)
			{
				a = 48;
				write(1, &a, 1);
				write_in_upper_hex(c);
			}
			else
				write_in_upper_hex(c);
			count = count + 3;
		}
		else
			write(1, &c, 1);
	}
	count = count + i;
	return (count);
}
