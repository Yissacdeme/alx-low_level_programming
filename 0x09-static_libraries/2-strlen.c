#include "main.h"

/**
<<<<<<< HEAD
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length as integer;
=======
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
 */

int _strlen(char *s)
{
<<<<<<< HEAD
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
=======
	int length = 0;

	while (s[length])
		length++;
	return (length);
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
}
