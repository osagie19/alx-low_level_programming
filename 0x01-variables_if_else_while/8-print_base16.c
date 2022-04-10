#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int let;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (let = 'a'; let <= 'f'; let++)

	{
		putchar(let);
	}

	putchar('\n');

	return (0);

}
