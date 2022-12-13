/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:02:19 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/21 15:08:31 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}
char ft_revprint(char *str)
{
	int i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return(str);
}
int main()
{
	ft_revprint("Reem");
	return(0);
}
