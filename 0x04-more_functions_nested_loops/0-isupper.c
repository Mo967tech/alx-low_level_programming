#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.*
 */
int _isupper(int c);
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
int _isupper(int c)
{
	if (c == 'A')
		return (1);
	else
		return (0);
}
