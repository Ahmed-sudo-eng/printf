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

	/* To find the string length */
	while (s[i] != '\0')
		i++;
	/* To prvent NULL from being printed */
	i--;	
	/* Printing the string in reverse */
	for (j = i; j >= 0; j--)
	{
		c = s[j];
		write(1, &c, 1);
	}
	return (i + 1);
}
