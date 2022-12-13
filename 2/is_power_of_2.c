/*Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/

#include<stdio.h>

int is_power_of_2(unsigned int n)
{
    if(n == 1 || n == 2)
        return(1);
    while(n > 2)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            return(0);
    }
    return(1);
}
int main ()
{
    printf("%d\n", is_power_of_2(16));
}