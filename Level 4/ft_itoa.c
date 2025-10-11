#include <stdlib.h>

int	ft_count_len(int nbr)
{
	int	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
		1 &&( nbr /= 10, i++);
	return i;
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len = ft_count_len(nbr);
	long	num = nbr;
	char	*str = (char *)malloc((sizeof(char) * (len + 1)));
	if (!str)
		return NULL;
	str[len] = '\0';
	i = len -1;
	if (num < 0)
		1 && (str[0] = '-', num = -num);
	while (num > 9)
		1 && (str[i] = num % 10 + '0', num /= 10, i--);
	return (str[i] = num + '0', str);
}

