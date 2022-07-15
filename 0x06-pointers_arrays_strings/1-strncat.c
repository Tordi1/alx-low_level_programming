#include "holberton.h"

/**
 * _strncat - concatenates two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at the endof dex
 * @n: integers parameters to compare index to
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++} = src[index];

	return (dest);
}
