/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:28:32 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 15:50:56 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Deletes and frees the given node and every successor 
//of that node, using the del and free
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*newl;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		newl = (*lst)->next;
		ft_lstdelone (*lst, del);
		*lst = newl;
	}
	*lst = 0;
}
