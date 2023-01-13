#include <stdio.h>
/**
* main - scans and prints integers
* @a: first integer to use
* @b: second integer to use
* @c: product of the two
* Return: always 0
*/
int main()
{
	int a, b, c;

	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);

	c = a * b;

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	return (0);
}
