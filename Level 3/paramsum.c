#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//putnbr simplifié car on veut afficher le nombre
//d'arguments qu'on donne au main
void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int ac, char **av)
{
	//on fait -1 car on compte le a./out
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
}
