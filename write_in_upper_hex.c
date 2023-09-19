#include "main.h"
#include <unistd.h>

/**
 * write_in_upper_hex - a function that converts decimal numbers to upper case
 * hexdecimal and print it
 * @number: The number to be converted
 *
 * Return: Nothing
 */
void write_in_upper_hex(unsigned int number)
{
	int arr[12];
	int i = 0;
	int j;
	int hex_dig;

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
}
