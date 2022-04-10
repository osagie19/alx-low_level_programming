#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myNum;

	for (myNum = '0'; myNum <= '9'; myNum++)

		putchar(myNum);

	putchar('\n');

	return (0);
}
