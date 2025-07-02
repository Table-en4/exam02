#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (ac == 3)
	{
		//on incremente dans la premiere string
		while (av[1][i])
		{
			//on incremente dans la deuxieme string
			while (av[2][j])
			{
				//si i est egale a j dans la deuxieme string
				//on incremente k et on break pour revenir 
				//a la boucle juste au dessus
				if (av[1][i] == av[2][j])
				{
					k++;
					break;
				}
				j++;
			}
			i++;
		}
		//si k est egal a i alors la string est complete
		//et on peut l'afficher dans ce cas
		//si elle n'est pas complete alors on return \n
		if (k == i)
		{
			i = 0;
			while (av[1][i])
				write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
