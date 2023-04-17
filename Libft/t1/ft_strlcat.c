/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:49:43 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 13:49:47 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static unsigned int	ft_lenght(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	l;
	unsigned int	i;

	if (size <= ft_lenght(dst))
		return (size + ft_lenght(src));
	l = ft_lenght(dst);
	i = 0;
	while (src[i] != '\0' && l + 1 < size)
	{
		dst[l] = src[i];
		l++;
		i++;
	}
	dst[l] = '\0';
	return (ft_lenght(dst) + ft_lenght(&src[i]));
}
