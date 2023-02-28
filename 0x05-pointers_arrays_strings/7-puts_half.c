#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to first char
 * Return: void
*/
void puts_half(char *str)
{
	int length, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;

	}
	length--;
	i = 0;
	for (i = 0; i <= length; i++)
	{
		if (((length + 1) % 2 == 0 && i <= length / 2) ||
				((length + 1) % 2 != 0 && i <= (length) / 2))
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
