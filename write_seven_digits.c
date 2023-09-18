#include "main.h"
#include <unistd.h>

/**
 * write_seven_digits - a function that writes seven digits number to stdout
 * @number: The number to be printed
 *
 * Return: Nothing
 */
void write_seven_digits(int number)
{
	int a, b, c, d, e, f, g;

	g = number % 10;
	number -= g;
	number /= 10;
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
	g += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, &g, 1);
}
