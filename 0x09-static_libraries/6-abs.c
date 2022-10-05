#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
=======

/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints the absolute value of an integer
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
}
