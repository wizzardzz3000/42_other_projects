/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:38:11 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/06 10:38:21 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*mem;
	unsigned char	*source;

	i = 0;
	mem = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n)
	{
		mem[i] = source[i];
		if (mem[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
