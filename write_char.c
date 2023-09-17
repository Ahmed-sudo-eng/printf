#include "main.h"
#include <unistd.h>

/**
 * write_char - This function writes single character to stdout
 * @c: character to print
 *
 * Return: Nothing
 */
int write_char(char c)
{
	write(1, &c, 1);
	return (1);
}
