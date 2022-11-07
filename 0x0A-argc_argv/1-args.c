#include  <stdio.h>
/**
* main: - This prints the number of arguments passed to it.
* @argc: This refers to the number of command line arguments.
* @argv: This refers to the command line arguments.
* Return: 0 - means success.
**/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
