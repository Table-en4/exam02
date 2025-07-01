#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	t;

	if (ac == 2)
	{
		i = 0;
		j = 0;
		t = 1;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				t = 0;
			else
			{
				if (t == 0 && j == 1)
					write(1, " ", 1);
				t = 1;
				j = 1;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
