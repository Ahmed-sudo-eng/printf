#include "main.h"
#include <unistd.h>

/**
 * write_in_binary - a function that convert decimal numbers to binary and
 * print it
 * @number: The number to be converted and printed
 *
 * Return: The number of digits printed
 */
int write_in_binary(unsigned int number)
{
	int arr[64];
	int i = 0;
	int j;
	char bin_dig;

	while (1)
	{
		if (number == 0)
		{
			bin_dig = 48;
			write(1, &bin_dig, 1);
			return (1);
		}
		if (number == 1)
		{
			arr[i] = 1;
			break;
		}
		arr[i] = number % 2;
		number = number / 2;
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		bin_dig = arr[j] + 48;
		write(1, &bin_dig, 1);
	}
	return (i + 1);
}
