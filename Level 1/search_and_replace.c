#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	//faire attention aux nombres d'arguments
	//qu'on est censé prendre ici 4 et pas 3
	//à cause du a./out qui compte lui aussi
	if (ac == 4)
	{
		while (av[1][i])
		{
			//condition pour verifier si on a une string
			//ou un seul element dans nos arguments
			//on veut rentrer uniqument si elle en contient
			//un seul
			if (!av[2][1] && !av[3][1])
			{
				//on regarde dans notre string de base si on recontre
				//un element de notre deuxieme string
				//si oui alors on le remplace par notre trisieme arguments
				if (av[1][i] == av[2][0])
					write(1, &av[3][0], 1);
				else
					write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
