#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * return: 0 (on success).
 *
 */

int main(void)
{

	int pass, sum;


	srand(time(NULL));

	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand()  %  128);

		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}