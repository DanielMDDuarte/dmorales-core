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

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int		l1;
	unsigned int		l2;
	char				*str;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (l1 + l2 + 1));
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = 0;
	return (str - (l1 + l2));
}