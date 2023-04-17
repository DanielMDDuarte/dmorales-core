/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:24:15 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 12:25:21 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	t;
	char			*d;
	const char		*s;

	t = 0;
	d = dest;
	s = src;
	while (t < n)
	{
		d[t] = s[t];
		t++;
	}
	return (dest);
}
