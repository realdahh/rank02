/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha_mirror.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:45:08 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/22 13:20:41 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_char(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	else if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	write(1, &c, 1);
}
int main(int ac , char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			check_char(av[1][i++]);
	}
	write(1,"\n", 1);
	return (0);
}
