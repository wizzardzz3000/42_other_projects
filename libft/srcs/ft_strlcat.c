/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:48:58 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/14 12:59:00 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	t;
	unsigned int	u;

	t = ft_strlen(dest);
	if (n < t)
		return (ft_strlen((char*)src) + n);
	u = 0;
	while (t < (n - 1) && src[u])
		dest[t++] = src[u++];
	dest[t] = '\0';
	while (src[u++])
		++t;
	return (t);
}
