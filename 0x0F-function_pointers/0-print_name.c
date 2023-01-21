#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name passed to it
 * @name: char to display to the stdout
 * @f: A pointer to function
 * Return: No return casue we have declared VOID as R_TYPE
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
