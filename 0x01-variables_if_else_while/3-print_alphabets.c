/*
 *
 *  * File: 3-print_alphabets.c
 *
 *   * Auth: Yisihake Demeke 
 *
 */

#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * *     Return: Always 0.
 *
 */

int main(void)

{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
						putchar(letter);

		for (letter = 'A'; letter <= 'Z'; letter++)
						putchar(letter);

		putchar('\n');
		return (0);
}
