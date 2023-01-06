#include "main.h"

/**
 * main - check code
 * A program in C that checks for uppercase letters
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
