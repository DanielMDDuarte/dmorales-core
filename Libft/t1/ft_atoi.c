/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:15:44 by dmorales          #+#    #+#             */
/*   Updated: 2023/04/17 12:16:28 by dmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ws(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		||c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	num;

	while (ws(*nptr))
		nptr++;
	neg = 0;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			neg++;
		nptr++;
	}
	num = 0;
	while (*nptr >= '0' && *nptr <= '9' && *nptr)
	{
		num *= 10;
		num += *nptr - '0';
		nptr++;
	}
	if (neg % 2 == 1)
		num *= (-1);
	return (num);
}
