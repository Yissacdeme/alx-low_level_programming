#include "main.h"

/**
<<<<<<< HEAD
* _atoi - converts a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
=======
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
<<<<<<< HEAD
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
=======

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
