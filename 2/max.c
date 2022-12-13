/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

#include<stdio.h>

int max(int* tab, unsigned int len)
{
	int i;
	int p;

	i = 0;
	if(tab[i]  == 0)
		return(0);
	while(i < len-1)
	{
		if (tab[i] > tab[i + 1])
		{
			p = tab[i + 1];
			tab[ i + 1] = tab[i];
			tab[i] = p;
			i = 0;
		}
		else 
			i++;
	}
	return(tab[i]);
}
int main()
{
	int a[] = {3, 5, 7, 9};
	printf("%d", max(a , 4));
}
