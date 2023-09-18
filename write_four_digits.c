#include "main.h"
#include <unistd.h>

/**
 * write_four_digits - a function that write four digits number to stdout
 * @number: The number to be printed
 *
 * Return: Nothing
 */
void write_four_digits(int number)
{
	char negative = 45;
	int a, b, c, d;

	if (number < 0)
	{
		write(1, &negative, 1);
		number = number * -1;
	}
	d = number % 10;
	number -= d;
	number /= 10;
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
	d += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}
