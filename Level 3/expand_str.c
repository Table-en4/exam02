#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if (c <= 32)
		return 1;
	return 0;
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	space = 0;
	if (ac == 2)
	{
		//on skip les premiers space en debut de phrase
		while (is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			//si il y a un espace alors space = 1
			if (is_space(av[1][i]))
				space = 1;
			//si il n'y pas d'espace alors on affiche
			if (!is_space(av[1][i]))
			{
				//si au millieu on croise un espace alors
				//on affiche 3 espaces et on remet space a 0
				if (space)
					write(1, "   ", 3);
				space = 0;
				ft_putchar(av[1][i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
}
