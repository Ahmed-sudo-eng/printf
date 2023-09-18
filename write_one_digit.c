#include "main.h"
#include <unistd.h>

/**
 * write_one_digit - This function write one digit number to stdout
 * @number: The number to print
 *
 * Return: Nothing
 */
void write_one_digit(int number)
{
	int c = number;

	c += 48;
	write(1, &c, 1);
}
