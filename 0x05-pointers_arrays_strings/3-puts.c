#include "main.h"
/**
 * _puts - print a string to the stdout
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int a = 0;

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
