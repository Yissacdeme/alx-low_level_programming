<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: returns no error
=======
#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
 */

void _puts(char *str)
{
	int i = 0;

<<<<<<< HEAD
	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
=======
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
>>>>>>> 6cd9dac142a3cf23359d4bdbb9c6c16886f12967
}
