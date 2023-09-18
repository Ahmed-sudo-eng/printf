#include "main.h"

/**
 * digits_counter - a function that counts the digits of a given number
 * @number: the number to count digits for
 *
 * Return: The number of digits
 */
int digits_counter(int number)
{
	int dn; /* digits number */

	if (number < 0)
		number = number * -1;	/* To handle negative numbers */

	if ((number / 1000000000) != 0)
		dn = 10;
	else if ((number / 100000000) != 0)
		dn = 9;
	else if ((number / 10000000) != 0)
		dn = 8;
	else if ((number / 1000000) != 0)
		dn = 7;
	else if ((number / 100000) != 0)
		dn = 6;
	else if ((number / 10000) != 0)
		dn = 5;
	else if ((number / 1000) != 0)
		dn = 4;
	else if ((number / 100) != 0)
		dn = 3;
	else if ((number / 10) != 0)
		dn = 2;
	else
		dn = 1;

	return (dn);
}
