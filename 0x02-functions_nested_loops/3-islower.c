#include "main.h"

/**
 * _islower - look in main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if c is lowercase or 0 if is otherwise
 */
int _islower(int c)
{
	char a;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
	}

	return (lower);
}
