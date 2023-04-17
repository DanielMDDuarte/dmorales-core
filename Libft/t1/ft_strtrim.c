#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	const char	*t;

	t = s;
	while (*s)
		s++;
	return (s - t);
}

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	jump(int way, char const *s1, const char *set, int len)
{
	int	i;
	if (way == 0)
	{
		i = 0;
		while (i < len)
		{
			if (in_set(s1[i], set))
				i++;
			else
				return (i);
		}
	}
	else
	{
		i = way;
		while (i > 0)
		{
			if (in_set(s1[i], set))
				i--;
			else
				return (i);
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*str;

	len = ft_strlen(s1);
	str = malloc(sizeof(char) * (len + 1));
	i = jump(0, s1, set, len);
	if (i == len)
	{
		*str = 0;
		return (str);
	}
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	i = jump(len - 1, s1, set, len);
	str[i + 1] = 0;
	return (str);
}