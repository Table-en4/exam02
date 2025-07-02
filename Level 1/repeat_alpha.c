#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int	rep;
	char c;

	i = 0;
	if (ac == 2)
	{
		//parcourir ma string
		while (av[1][i])
		{
			c = av[1][i];
			//verifier si ma string est composé d'alphabet
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				//si minuscule on enregistre la valeur de rep dans l'alphabet
				if (c >= 'a' && c <= 'z')
					rep = c - 'a';
				//si majuscule on enregistre la valeur de rep dans l'alphabet
				if (c >= 'A' && c <= 'Z')
					rep = c - 'A';
				//on decremente la valeur dans l'alphabet jusqu'a sa place
				while (rep > 0)
				{
					write (1, &c, 1);
					rep--;
				}
			}
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
