/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:12:45 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 16:12:54 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	long long		num;
	char			*str;

	num = nmemb * size;
	if (nmemb <= 0 || size <= 0 || num > INT_MAX)
		return (0);
	str = malloc(nmemb * size);
	i = 0;
	while (i < nmemb)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
