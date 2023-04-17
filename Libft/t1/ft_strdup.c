/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:11:31 by dmorales          #+#    #+#             */
/*   Updated: 2023/02/22 09:44:52 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void	ft_strcpy(char *dest, const char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}

char	*ft_strdup(const char *s)
{
	char	*p;
	int		size;

	size = ft_strlen(s) + 1;
	p = malloc(sizeof(char) * size);
	if (!p)
		return (0);
	else
		ft_strcpy(p, s);
	return (p);
}

//int main(void)
//{
//    char *s = "hello";
//    char *d;
//    d = ft_strdup(s);
//    printf("%s .../... %s '%c'\n", s, d, d[5]);
//    free(d);
//}
