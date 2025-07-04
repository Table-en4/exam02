#include <unistd.h>

int	is_space(char c)
{
	if (c <= 32)
		return 1;
	return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	capitalizer(char *str)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && is_space(str[i - 1]))
			str[i] -= 32;
		ft_putchar(str[i++]);
	}
}

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac == 1)
		ft_putchar('\n');
	else
	{
		while ( i < ac)
		{
			capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
