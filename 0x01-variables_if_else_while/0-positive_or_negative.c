#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
/** This program will assign a random number to the variable n each time it is executed. 
 * Complete the source code in order to print whether the number stored in the variable n is positive or negative.
 */ 
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%i is positive\n", n);
		else if (n < 0)
			printf("%i is negative\n", n);
		else
			printf("%i is zero\n", n);
		return (0);
}
