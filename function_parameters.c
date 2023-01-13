#include <stdio.h>

/**
* modify_my_char_var - Solution
*
* Return: nothing
*/
void modify_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}
/**
* main - Solution
*
* Return: Always 0
*/
int main(void)
{
	char c;
	char *p;

	p =&c;
	c = 'H';
	printf("Value of 'c' before the call: %c\n", c);
	printf("Address of 'c': %p\n", &c);
	modify_my_char_var(p, c);
	printf("Value of 'c' after the call: %c\n", c);
	printf("Address of 'c' after the call: %p\n", &c);
	return (0);
}
