#include "main.h"
#include <unistd.h>

/**
 * write_in_decimal - a function that writes decimal numbers to stdout
 * @number: The number to be printed
 *
 * Return: The number of digits printed
 */
int write_in_decimal(int number)
{
	int arr[12];
	int i = 0;
	int j;
	int dec_dig;
	char neg = 45;

	/* Handling negative sign numbers */
	if (number < 0)
	{
		write(1, &neg, 1);
		number = number * -1;
	}
	/* Adding number digits one by one to the array */
	while (1)
	{
		if (number < 10)
		{
			arr[i] = number;
			break;
		}
		arr[i] = number % 10;
		number = number / 10;
		i++;
	}
	/* Writing number digits one by one from the array to stdout */
	for (j = i; j >= 0; j--)
	{
		dec_dig = arr[j];
		dec_dig = dec_dig + 48;
		write(1, &dec_dig, 1);
	}
	return (i + 1);
}
