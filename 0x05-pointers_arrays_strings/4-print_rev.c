#include "main.h"

/**
 * print_rev -prints a string in reverse
 * @s: string to be printed
 * return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i > 0; i--)
		_putchar(s[i]);

	_Putchar('\n');
}