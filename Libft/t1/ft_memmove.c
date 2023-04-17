/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:25:34 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 12:32:06 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	t;
	char			*d;
	const char		*s;

	d = dest;
	s = src;
	t = 0;
	if (dest > src && n > 0)
	{
		while (t < n)
		{
			d[n - t - 1] = s[n - t - 1];
			t++;
		}
	}
	else
	{
		t = 0;
		while (t < n)
		{
			d[t] = s[t];
			t++;
		}
	}
	return (dest);
}
