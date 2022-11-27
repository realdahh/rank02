/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:28:13 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/21 13:45:17 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		str[i] += 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
		str[i] -= 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
		str[i] += 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
		str[i] -= 13;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rot13(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
