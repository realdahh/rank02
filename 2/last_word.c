#include<unistd.h>
void last_word(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while(str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			x = i + 1;
		i++;
	}
	while(str[x] && str[x] > ' ')
	{
		write(1, &str[x], 1);
		x++;
	}
}
int main (int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return(0);
}
