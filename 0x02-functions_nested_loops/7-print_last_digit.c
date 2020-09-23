#include "holberton.h"
/**
 * print_last_digit - returns last digit
 * @d: prints last digit
 *
 * Return: last digit
 */
int print_last_digit(int d)

{
	int digit = d % 10;

	if (digit < 0)
	{
		digit = digit * (-1);
	}
	_putchar(digit + '0');
	return (digit);
}
