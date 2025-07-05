#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			//si on rencontre une minuscule on la convertie en majuscule
			//en decrementant de 32 dans la table ascii
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
			//on fait la meme chose si on croise une majuscule
			//sauf que la on va incrementer de 32 dans la table ascii
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
