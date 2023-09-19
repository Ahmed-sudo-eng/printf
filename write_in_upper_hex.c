#include "main.h"
#include <unistd.h>

/**
 * write_in_upper_hex - a function that converts decimal numbers to upper case
 * hexdecimal and print it
 * @number: The number to be converted
 *
 * Return: The number of digits printed
 */
int write_in_upper_hex(unsigned int number)
{
	int arr[12];
	int i = 0;
	int j;
	int hex_dig;

	/* Converting decimal to hex and adding it to the array */
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
	/* Writing hex number stored in the array to stdout digit by digit */
	for (j = i; j >= 0; j--)
	{
		hex_dig = arr[j];
		if (hex_dig == 10)
		{
			hex_dig = 'A';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 11)
		{
			hex_dig = 'B';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 12)
		{
			hex_dig = 'C';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 13)
		{
			hex_dig = 'D';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 14)
		{
			hex_dig = 'E';
			write(1, &hex_dig, 1);
		}
		else if (hex_dig == 15)
		{
			hex_dig = 'F';
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
