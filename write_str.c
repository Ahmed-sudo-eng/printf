#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * write_str - This function prints a string to stdout
 * @s: a pointer to the string
 *
 * Return: Nothing
 */
int write_str(char *s)
{
	int n;

	n = write(1, s, strlen(s));
	return (n);
}
