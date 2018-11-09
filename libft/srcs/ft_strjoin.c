/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:05:39 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/07 11:05:40 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;
	int		i;
	int		b;

	b = 0;
	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	res = (char *)malloc(len * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[b] && i < len)
		res[i++] = s1[b++];
	b = 0;
	while (s2[b] && i < len)
		res[i++] = s2[b++];
	res[i] = '\0';
	return (res);
}
