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
	char negative = 45;

	if (number < 0)	/* Handling negative numbers */
	{
		write(1, &negative, 1);
		number = number * -1;
	}
	number += 48;
	write(1, &number, 1);
}
