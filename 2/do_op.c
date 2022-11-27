/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:38:38 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/23 13:17:39 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int	i;
		int	x;

		i = atoi(av[1]);
		x = atoi(av[3]);
		if (av[2][0] == '+')
			printf("%d\n", (i + x));
		else if (av[2][0] == '-')
			printf("%d\n", (i - x));
		else if (av[2][0] == '*')
			printf("%d\n", (i * x));
		else if (av[2][0] == '/')
			printf("%d\n", (i / x));
	}
	else
		write(1, "\n", 1);
	return (0);
}
