include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		//on incremente si la ou les premieres valeurs sont des spaces/tab
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		//on incremente jusqu'a la fin du mot ou un espace/tab
		while ((av[1][i] != ' ' && av[1][i] != '\t') && av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}
