#include "main.h"
#include <unistd.h>

/**
 * write_five_digits - a function that writes five digits numbe rto stdout
 * @number: The numbe rto be printed
 *
 * Return: Nothing
 */
void write_five_digits(int number)
{
	int a, b, c, d, e;

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
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}
