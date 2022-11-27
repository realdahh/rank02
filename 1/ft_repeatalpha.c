/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeatalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:47:15 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/22 14:13:10 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_repeat_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return (1);
}

int	main(int ac, char **av)
{
	int		i;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = ft_repeat_alpha(av[1][i]);
			while (c--)
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
