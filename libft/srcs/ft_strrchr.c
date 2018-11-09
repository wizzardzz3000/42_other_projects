/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:10:29 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/07 14:21:26 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char*)s;
	i = ft_strlen(str);
	while (i >= 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return (str + i);
	return (NULL);
}
