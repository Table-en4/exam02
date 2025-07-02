#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (res[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	return (res);
}

void	put_hex()x

