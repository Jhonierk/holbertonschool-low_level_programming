#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	/*Variable int n*/
	int n;
	
	/*Method that generates a random number either odd or even*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/*Method to print on screen if random number is odd or even*/
	/*If it is greater than zero it is even!*/
	if (n > 0)
		printf("%i is positive\n", n);
		
	/*if it is less than zero it is odd*/
	else if (n < 0)
		printf("%i is negative\n", n);
		
		/*if it is not 0*/
	else
		printf("%i is zero\n", n);
		
	return (0);
}
