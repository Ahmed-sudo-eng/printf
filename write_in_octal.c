#include "main.h"
#include <unistd.h>

/**
 * write_in_octal - a function that convert decimal numbers to octal and print
 * it
 * @number: The number to be printed
 *
 * Return: The number of digits printed
 */
int write_in_octal(unsigned int number)
{
	int arr[15];
	int i = 0;
	int j;
	int oct_dig;

	while (1)
	{
		if (number < 8)
		{
			arr[i] = number;
			break;
		}
		arr[i] = number % 8;
		number = number / 8;
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		oct_dig = arr[j] + 48;
		write(1, &oct_dig, 1);
	}
	return (i + 1);
}
