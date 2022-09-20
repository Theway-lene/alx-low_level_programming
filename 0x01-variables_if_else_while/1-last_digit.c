#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main function prints last character 
 * Return: ends program
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last letter %d\n", n % 10);
	return (0);
}
