/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:02:50 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/07 11:02:55 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*res;
	unsigned int	i;

	i = 0;
	res = (char *)malloc(size + 1);
	if (res == NULL)
		return (NULL);
	while (i <= size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
