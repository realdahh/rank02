/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:55:29 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:18 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Adds the node new at the end of the list
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*count;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	count = ft_lstlast(*lst);
	count->next = new;
}
