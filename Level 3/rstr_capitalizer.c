#include <unistd.h>

//check si un element est un espace un tab \n ect
int	is_space(char c)
{
	if (c <= 32)
		return 1;
	return 0;
}

//afficher caractere par caractere
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		//on convertie chaque majuscule en miniscule
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		//on convertie la dernierre lettre du mot en majuscule en utilisant 
		//is space qui va verifier si le dernier mot est un espace, \n, \0 ou un tab
		if ((str[i] >= 'a' && str[i] <= 'z') && is_space(str[i + 1]))
			str[i] -= 32;
		//on affcihe lettre par lettre
		ft_putchar(str[i++]);
	}
}

int	main(int ac, char **av)
{
	//important il faut que i soit egal a 1 pour
	//ne pas prendre en compte le ./a.out
	int	i = 1;

	//si on a aucun argument on affiche un \n
	if (ac == 1)
		ft_putchar('\n');
	//sinon on fait une boucle qui va appliquer notre
	//fonction a chaque string de nos argument
	else
	{
		while (i < ac)
		{
			capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
