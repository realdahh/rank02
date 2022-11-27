/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FizzBuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:49:12 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/27 17:55:06 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_number(int nb)
{
	if (nb > 9)
		check_number(nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write (1, "fizz", 4);
		else if (nb % 5 == 0)
			write (1, "buzz", 4);
		else
			check_number(nb);
		write (1, "\n", 1);
		nb++;
	}
	return (0);
}

