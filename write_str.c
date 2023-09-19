#include "main.h"
#include <unistd.h>

/**
 * write_str - This function prints a string to stdout
 * @s: a pointer to the string
 *
 * Return: The number of character written
 */
int write_str(const char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		write(1, &c, 1);
	}
	return (i);
}
