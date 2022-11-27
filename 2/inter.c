/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:00:00 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/23 20:04:27 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int check_double(char c, char *str, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}
int check_match(char c, char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int main (int ac , char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			if (check_double(av[1][i], av[1], i))
			{
				if (check_match(av[1][i], av[2]))
					write(1, &av[1][i], 1);
			}
			i++;
		}
	}																																	
	write(1, "\n", 1);
}