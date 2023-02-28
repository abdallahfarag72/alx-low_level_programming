#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to first char
 * Return: void
*/
void puts2(char *str)
{
	int length, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;

	}
	length--;

	i = 0;
	while (i <= length)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
