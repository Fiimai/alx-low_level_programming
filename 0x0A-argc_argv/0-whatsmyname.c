#include <stdio.h>

/**
* main - prints its name, followed by a new line.
* @argc: This is the number of command line arguments.
* @argv: This is the array that contains the program command line arguments.
* Return: 0 - meaning success.
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
