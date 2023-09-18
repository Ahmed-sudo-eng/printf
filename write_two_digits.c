#include "main.h"
#include <unistd.h>

/**
 * write_two_digits - a function that writes two digits number to stdout
 * @number: The number to print
 *
 * Return: Nothing
 */
void write_two_digits(int number)
{
	char negative = 45;
	int a, b;

	if (number < 0)
	{
		write(1, &negative, 1);
		number = number * -1;
	}
	b = number % 10;
	number -= b;
	number /= 10;
	a = number;

	a += 48;
	b += 48;
	write(1, &a, 1);
	write(1, &b, 1);
}
