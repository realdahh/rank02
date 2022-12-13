/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:55:07 by realdahh          #+#    #+#             */
/*   Updated: 2022/11/28 18:29:14 by realdahh         ###   ########.fr       */
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
	int		i;
	char	*new;

	i = 0;
	len = ft_strlen(src);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (src[i])
	{
		new[i] == src[i]
		i++;
	}
	new[len] = '\0';
	return (new);
}
