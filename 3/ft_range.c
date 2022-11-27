// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.


#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
int		main()
{
	int start;
	int end;

	start = 0;
	end = 0;
	int *array;

	array = ft_range(start, end);
	int i = 0;
	while(i <= 0)
	{
		printf("%d", array[i]);
		i++;
	}
}

________________________________________________________



#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		n;
	int		*s;

	n = max >= min ? max - min : min - max;
	if (!(s = (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}