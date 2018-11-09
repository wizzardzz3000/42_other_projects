/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:04:14 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/08 14:17:00 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char				*res;
	unsigned int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	res = (char *)malloc(ft_strlen((char *)s) * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
