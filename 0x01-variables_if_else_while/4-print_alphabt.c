#include <stdio.h>

/**
 * main - prints alpha in lower case
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		if (ls != 'q' && ls != 'e')
			putchar(ls);
	}

	putchar('\n');

	return (0);
}
