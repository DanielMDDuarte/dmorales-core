/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:22:01 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 12:22:57 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const char		*src;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return ((void *)(src + i));
		i++;
	}
	return (0);
}
