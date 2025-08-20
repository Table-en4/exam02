#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//un putnbr normal
void	ft_putnbr(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

//un atoi normal
int	ft_atoi(char *str)
{
	int	res = 0;
	int	sign = 1;
	int	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return res * sign;
}

//un is prime noraml
int	is_prime(int n)
{
	int	i = 2;
	
	//si c'est inferieur a 2 on sait que c'est
	//un nombre impaire
	if (n < 2)
		return 0;
	//on divise notre valeur par deux
	while (i <= n / 2)
	{
		//modulo de n par i
		//si different de 0 alors
		//impaire si = 0 alors paire
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	main(int ac, char **av)
{
	int	n = ft_atoi(av[1]);
	int	res = 0;

	if (ac == 2)
	{
		//si notre nombre inferieur ou = a 0 alors on print 0
		if (n <= 0)
			return (write(1, "0\n", 2), 0);
		while (n > 1)
		{
			if (is_prime(n))
				//si notre nombre est impaire on incremente
				//la valeur de n dans notre resultat
				//qui lui va recuperer la valeur de n a chaque decrementation
				//exemple avec 7 : 7 + 5 + 3 + 2 = 17
				res += n;
			//on decremente pour mettre a jour n
			n--;
		}
		ft_putnbr(res);
	}
	ft_putchar('\n');
}
