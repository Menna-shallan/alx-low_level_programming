#include "main.h"
#include <string.h>
/**
 * print_rev - prints string follwed by new line.
 * @s: string to be printed
 */
void print_rev(char *s)
{
int a, b;

b = 0;

while (s[n] != '\n')
	b++;

for (a = b - 1; a >= 0; a--)
{
	_putchar(s[a]);

}

_putchar('\n');
}
