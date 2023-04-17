/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:28:09 by dmorales          #+#    #+#             */
/*   Updated: 2023/02/22 12:15:11 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_count(const char *s, char c)
{
	int	k;
	int	is_word;

	k = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!is_word)
			{
				k++;
				is_word = 1;
			}
		}
		else
			is_word = 0;
		s++;
	}
	return (k);
}

char	*sep_cpy(char *dest, const char *src, char c)
{
	while (*src == c && *src)
	{
		src++;
	}
	while (*src != c && *src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return ((char *)src);
}

int	word_len(const char *src, char c)
{
	int	k;

	while (*src == c && *src)
		src++;
	k = 0;
	while (*src != c && *src)
	{
		k++;
		src++;
	}
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		n;
	int		i;

	n = str_count(s, c);
	split = malloc(sizeof(char *) * (n + 1));
	if (!split)
		return (0);
	i = 0;
	while (i < n)
	{
		split[i] = malloc(sizeof(char) * (word_len(s, c) + 1));
		if (!split[i])
			return (0);
		s = sep_cpy(split[i], s, c);
		i++;
	}
	split[i] = 0;
	return (split);
}

//int main(void)
//{
//    char *s = " hola amigos como estan ";
//    char **split = ft_split(s, " oe");
//    while (*split)
//    {
//        printf("%s [%i] '%c' \n", *split, word_len(*split, " "),
//        (*split)[word_len(*split, " ")]);
//        split++;
//    }
//}
