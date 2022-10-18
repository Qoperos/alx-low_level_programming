#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times.
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	char i, c;
	for (i = 0; i <= 9; i++)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
