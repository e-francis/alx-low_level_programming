#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		i++;
	}
	return (i);
}
