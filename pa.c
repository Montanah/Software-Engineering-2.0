#include <stdio.h>
/**
  * main - entry point
  * Return: always 0
  */
int main(void)
{
        int MAX = 3;
        int var[] = {20, 50, 100};
        int i, *ptr;
        
        ptr = var;
        
        for (i = 0; i < MAX; i++)
        {
                printf("Address of var[%d] = %x\n", i,  ptr);
                printf("Value of var[%d] = %d\n", i, *ptr);
                
                ptr++;
        }
        return (0);
}
