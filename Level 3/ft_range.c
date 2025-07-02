#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*range;

	if (start <= end)
		return (NULL);
	//malloc un tableau de int (la taille du tableau = start - end
	//donc si start = 6 et end = 10 alors on malloc 4)
	range = (int *)malloc(sizeof(*range) * (start - end));
	i = 0;
	//on enregistre nos valeurs dans notre tableau
	//en incrémentant start jusqu'a end donc
	//tant que 6 < 10 on rajoute 1 a chaque tour de boucle
	while (start < end)
	{
		range[i] = start;
		i++;
		start++;
	}
	//return le tableau de int
	return (range);
}
