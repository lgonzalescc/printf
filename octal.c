#include "main.h"
/**
 * print_octal - prints the octal representation of a decimal number
 * @parameters: argument
 *
 * Return: number of characters printed
 */

int print_octal(va_list parameters)
{
	int j = 0;
	unsigned int num = va_arg(parameters, unsigned int);
	int arr[sizeof(int) * 8 + 1];
	int i = 0;

	if (num < 8)
	{
		_putchar(num + '0');
		j++;
		return (j);
	}

	else
	{
		while (num > 8)
		{
			arr[i] = num % 8;
			num /= 8;
			i++;
		}

		if (num < 8)
			arr[i] = num;

		while (i >= 0)
		{
			_putchar(arr[i] + '0');
			j++;
			i--;
		}
	}
	return (j);
}
