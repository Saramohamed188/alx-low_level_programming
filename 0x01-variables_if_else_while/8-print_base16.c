#include <stdio.h>
#include <stdlib.h>

/*
 * * main - prints the phrase
 *
 * * "Programming is like building a multilingual puzzle"
 *
 * * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int num = '0'; /*Initialize num to 0*/
	char letter = 'a'; /*Initialize letter to a*/

	while (num <= '9') /*Print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f') /*Print a-f*/
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
