#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	unsigned int	res;
	unsigned int	i;

	i = 0;
	res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	return (res);
}

void	put_hex(int n)
{
	char	*digits = "0123456789abcdef";

	if (n > 16)
		put_hex(n / 16);
	n = digits[n % 16];
	write(1, &n, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		put_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}
