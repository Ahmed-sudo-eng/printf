#include "main.h"
#include <unistd.h>

/**
 * write_in_lower_hex - a function that converts decimal numbers to lower case
 * hexdecimal and print it
 * @number: The number to be converted
 *
 * Return: The number of digits printed
 */
int write_in_lower_hex(unsigned int number)
{
	int arr[12];
	int i = 0;
	int j;
	int hex_dig;

	/* Conveting decimal to hex and storing it in the array */
	while (1)
	{
		if (number < 16)
		{
			arr[i] = number;
			break;
		}
		arr[i] = number % 16;
		number = number / 16;
		i++;
	}
	/* Writing hex number to stdout */
	for (j = i; j >= 0; j--)
	{
		hex_dig = arr[j];
		if (hex_dig == 10)
		{
			hex_dig = 'a';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 11)
		{
			hex_dig = 'b';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 12)
		{
			hex_dig = 'c';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 13)
		{
			hex_dig = 'd';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 14)
		{
			hex_dig = 'e';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 15)
		{
			hex_dig = 'f';
			write(1, &hex_dig, 1);
		}
		else
		{
			hex_dig = hex_dig + 48;
			write(1, &hex_dig, 1);
		}
	}
	return (i + 1);
}
