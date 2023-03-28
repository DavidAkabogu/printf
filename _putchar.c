#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 * Return: str - a
 */

int _puts(char *str)
{
	char *a = str;

	while (*str)
	{
		_putchar(*str++);
	}

	return (str - a);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on success. -1 on error.
 */

int _putchar(int c)
{
	static int i;
	static char buff[O_BUFF];

	if (c == BUFFER || i >= O_BUFF)
	{
		write(1, buff, i);
		i = 0;
	}

	if (c != BUFFER)
	{
		buff[i++] = c;
	}

	return (1);
}
