#include "main.h"

/**
* _strcpy - a function that copies the string pointed to by src,
* includong the termonating null byte (\0),
* to the buffer pointed to by destination.
*
* @dest: A pointer to destination of string.
* @src: A pointer to source string to copy from
*
* Return: A pointer to the destination.
*/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
