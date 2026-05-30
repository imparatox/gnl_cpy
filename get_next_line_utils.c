#include "get_next_line.h"

int	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
	}
	j = 0;
	while (s2[j])
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}

char	*ft_strchr(char *str, int c)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == (char)c)
				return ((char *)&str[i]);
			i++;
		}
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}

char	*ft_before(char *str)
{
	size_t	i;
	char	*before;

	i = 0;
	while (str[i] != '\n')
		i++;
	before = malloc(i + 2);
	if (!before)
		return (NULL);
	i = 0;
	while(str[i] != '\n')
	{
		before[i] = str[i];
		i++;
	}
	before[i] = '\0';
	return (before);
}

#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "";
	str2 = "World !";
	printf("%s", ft_strjoin(str1, str2));
	return (0);
}
