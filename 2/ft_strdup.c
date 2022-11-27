/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:55:07 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/23 14:08:22 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_stren(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i)
}

char	*ft_strdup(const char *src)
{
	int		len;
	char	*new;

	len = ft_strlen(src);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	len = 0;
	while (src[len])
	{
		new[len] == src[len]
		len++;
	}
	new[len] = '\0';
	return (new);
}
