#include "main.h"

/**
 * print_last digit -prints the last digit
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;

	_putchar(x + '0');
	return (x);

}
