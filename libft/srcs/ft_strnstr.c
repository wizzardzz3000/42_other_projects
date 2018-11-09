/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:24:15 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/09 12:21:40 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int size;

	i = 0;
	j = 0;
	size = 0;
	if (!(needle[j]))
		return (haystack);
	while (needle[size])
		size++;
	while (haystack[i] && len >= size)
	{
		len--;
		while (haystack[i + j] == needle[j])
		{
			if (j == size - 1)
				return (haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
