#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments
 * @argc: first para
 * @argv: second para
 *
 * Description: prints all arguments it receives
 * Return: Always(0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
