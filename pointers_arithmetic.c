#include <stdio.h>

/**
* main - solution
*
* Return: Always 0
*/
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	printf("Value of a[3]: %d\n", a[3]);
	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;
	
	printf("Value of a[1]: %d\n", *(a + 1));
	printf("Value of a[3]: %d\n", *(a + 3));

	return (0);
}
