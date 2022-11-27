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