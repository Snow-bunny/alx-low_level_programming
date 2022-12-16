#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 * Return: Alaway 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
