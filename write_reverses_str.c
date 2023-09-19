#include "main.h"
#include <unistd.h>

/**
 * write_reversed_str - a function that prints a string in reverse
 * @s: The string to be reversed and printed
 *
 * Return: The number of characters printed
 */
int write_reversed_str(const char *s)
{
	int i = 0;
	int j;
	char c;

	while (s[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
	{
		c = s[j];
		write(1, &c, 1);
	}
	return (i);
}
