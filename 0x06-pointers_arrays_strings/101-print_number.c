#include "main.h"

/**
 * print_number - print number chars
 * @n: Integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;


	ni - n;
	if (n < 0)
	{
		_putchar('-');
		ni = -n;
	}
	if ((n1 / 10) != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
