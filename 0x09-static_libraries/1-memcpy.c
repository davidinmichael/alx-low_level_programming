#include "main.h"

/**
* _memcpy - copies mempry area
* @dest: pointer to destination array
* @src: pointer to source array
* @n: number of iterations
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
