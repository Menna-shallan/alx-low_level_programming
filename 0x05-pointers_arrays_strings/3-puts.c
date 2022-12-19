#include "main.h"
/**
 * _puts - print a string followed by new line.
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
