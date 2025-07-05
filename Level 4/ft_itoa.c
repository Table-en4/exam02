#include <stdlib.h>

int	count(int n)
{
	int	i = 0;
	//compter la taille de notre
	//nombre
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return i;
}

char	*ft_iota(int n)
{
	int	i;
	// déclarer la taille du nombre
	int	j = count(n);
	long	num = n;
	//malloc la taille du nomnbre
	char *str = (char *)malloc((sizeof(char) * (j + 1)));
	if (!str)
		return NULL;
	//donner le '\0' a la fin de la string
	str[j] = '\0';
	//ne pas prendre en compte le  '\0'
	//pour la suite des calculs
	i = j - 1;
	//gerer les negatifs
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		//faire la converion de int a char
		str[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	str[i] = num + '0';
	return (str);
}
