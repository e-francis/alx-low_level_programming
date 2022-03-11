#include <stdio.h>

/**
 * main - a program that prints all possible combinations of single-digit numbers from 0 t0 9
 *followed by separated by commas, followed by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
