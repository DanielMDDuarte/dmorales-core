/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:23:09 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 12:23:48 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	const unsigned char		*src1;
	const unsigned char		*src2;

	src1 = s1;
	src2 = s2;
	i = 0;
	while (i < n && src1[i] == src2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (src1[i] - src2[i]);
}
