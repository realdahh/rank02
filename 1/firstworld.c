/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstworld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:31:25 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/20 16:48:52 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 int main (int argc , char **argv)
 {
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t') && argv[1][i])
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return(0);
 }
 