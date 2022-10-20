#include "main.h"

/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int a)
{
	int x;

	if (a < 0)
		x = -1 * (a % 10);
	else
		x = a % 10;

	_putchar((x % 10) + '0');
	return (x % 10);
}
