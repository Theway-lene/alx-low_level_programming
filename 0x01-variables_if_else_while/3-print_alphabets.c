#include <stdio.h>

/*main function to print both caps and lower case
 * Return: ends program void
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar (a);

	for (a = 'A'; a <= 'Z'; a++)
		putchar (a);
	
	putchar ('\n');

	return (0);
}
