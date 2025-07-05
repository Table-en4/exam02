#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int	i = ft_strlen(src + 1);
	char	*dst = malloc(i);
	if (!dst)
		return NULL;
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
