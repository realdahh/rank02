/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:38:38 by realdahh          #+#    #+#             */
/*   Updated: 2022/12/04 19:14:37 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int	num1;
		int	num2;

		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		if (av[2][0] == '+')
			printf("%d\n", (num1 + num2));
		else if (av[2][0] == '-')
			printf("%d\n", (num1 - num2));
		else if (av[2][0] == '*')
			printf("%d\n", (num1 * num2));
		else if (av[2][0] == '/')
			printf("%d\n", (num1 / num2));
	}
	else
		write(1, "\n", 1);
	return (0);
}
