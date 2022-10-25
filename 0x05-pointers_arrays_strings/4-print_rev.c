#include "main.h"

/**
* print_rev - a funtion that prints a string, and in reverse,
* also followed by a new line
* @g: an input string
* Return: Nothing
*/
void print_rev(char *g)
{
	int len = 0;

	while (g[len] != '\0')
		len++;

	while (len)
		_putchar(g[--len]);

	_putchar('\n');
}
