#include "main.h"
#include <unistd.h>

/**
 * write_unsigned_decimal - a function that writes unsigned decimal
 * numbers to stdout
 * @number: The number to be printed
 *
 * Return: Nothing
 */
void write_unsigned_decimal(unsigned int number)
{
	int arr[12];
	int i = 0;
	int j;
	int dec_dig;

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
}
