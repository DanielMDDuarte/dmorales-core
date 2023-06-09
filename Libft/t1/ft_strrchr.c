/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:50:17 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 13:50:20 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*t;

	t = s;
	while (*s)
	{
		s++;
	}
	while (s != t)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}
