#include "main.h"
#include <unistd.h>

/**
 * write_three_digits - a function that writes three digits number to stdout
 * @number: The number to write
 *
 * Return: Nothing
 */
void write_three_digits(int number)
{
	int a, b, c;

	c = number % 10;
	number -= c;
	number /= 10;
	b = number % 10;
	number -= b;
	number /= 10;
	a = number;

	a += 48;
	b += 48;
	c += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
