#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more heaers go here*/

/* main - if number is greater than 0 print is positive
 * if number = 0 print is zero
 * if number is less than zero print negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;

	if(n > 0){
		
		printf("%d is postive\n", n);
	}
	if (n == 0){

		printf("%d is zero\n", n);
	}
	if (n < 0) {
		printf("%d is negative\n", n);
	}

	return (0);
}