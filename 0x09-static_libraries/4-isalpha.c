#include "main.h"
<<<<<<< HEAD
/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'a') && (c <= 'z')))
	
		return (1);
	
	else
		return(0);
=======

/**
 * _isalpha - Entry point
 * @c: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true. 0 if false
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
}
