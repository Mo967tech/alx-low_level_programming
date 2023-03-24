#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers goes there */

<<<<<<< HEAD

=======
>>>>>>> 1bf76ceb0ca5420e32dc6424091ac48811c825ef
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	scanf(" %d ", &n);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
<<<<<<< HEAD
		printf("%d is zero", n);
	}
	else if (n >= 0)
	{
		printf("%d is positive", n);
	}
	else
		printf("%d is negative", n);
=======
		printf("%d is zero\n", n);
	}
	else if (n >= 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is negative\n", n);
>>>>>>> 1bf76ceb0ca5420e32dc6424091ac48811c825ef
	return (0);
}
