#include "main.h"

/**
 * _isdigit - checks if a character is digit
 * @c: carrier variable
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
<<<<<<< HEAD
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
=======
	return (c >= 48 && c <= 57);
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
}
