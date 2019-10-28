#include "holberton.h"

/**
 * *str_concat - Concatenates two strings
 * @dest: First string being copied to
 * @str: Second string being copied from
 */
void str_concat(char *dest, char *str)
{
	unsigned int i = 0, len = 0;

	while (dest[len] != '\0')
		len++;

	for (; str[i] != '\0'; i++)
		dest[len + i] = str[i];
}
