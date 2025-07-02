#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		//on incrémente jusqu'au dernier
		//ellemenent de la string
		while (av[1][i])
			i++;
		//on supprime le '\0'
		i--;
		//on decremente jusqu'au "premier" element
		//de la strinng
		while (i >= 0)
			write(1, &av[1][i--], 1);
	}
	write(1, "\n", 1);
}
