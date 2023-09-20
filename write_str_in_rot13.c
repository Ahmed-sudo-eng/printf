#include "main.h"
#include <unistd.h>

/**
 * write_str_in_rot13 - a function that converts any string to rot13 format
 * and print it, rot13 is a cryptography algorithm
 * @s: The string to be manipulated
 *
 * Return: The number of characters printed
 */
int write_str_in_rot13(const char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		/* Handling capital letters */
		if (c >= 65 && c <= 90)
		{
			if (c <= 77)
				c += 13;
			else if (c > 77)
				c -= 13;
			write(1, &c, 1);
		}
		/* Handling small letters */
		else if (c >= 97 && c <= 122)
		{
			if (c <= 109)
				c += 13;
			else if (c > 109)
				c -= 13;
			write(1, &c, 1);
		}
		/* Write other characters as they are */
		else
			write(1, &c, 1);
	}
	return (i);
}
