/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:50:19 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:09:14 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates a new node and variable next is initialized to Null
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!(new))
		return (0);
	new->next = NULL;
	new->content = content;
	return (new);
}
