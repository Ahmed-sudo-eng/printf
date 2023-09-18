#include "main.h"
#include <unistd.h>

/**
 * write_six_digits - a function that writes six digits number to stdout
 * @number: The number to be printed
 *
 * Return: Nothing
 */
void write_six_digits(int number)
{
	char negative = 45;
	int a, b, c, d, e, f;

	if (number < 0)
	{
		write(1, &negative, 1);
		number = number * -1;
	}
	f = number % 10;
	number -= f;
	number /= 10;
	e = number % 10;
	number -= e;
	number /= 10;
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
	e += 48;
	f += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
}
