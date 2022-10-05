#include "main.h"

/**
<<<<<<< HEAD
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
=======
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: char
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

=======
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
	return (dest);
}
