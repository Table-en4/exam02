#include <stdlib.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 2;
	int	num = atoi(av[1]);

	if (ac == 2)
	{
		//si n = 1 on l'affiche
        if (num == 1)
            printf("1");
        //boucle pour nombre premiers
        while (i <= num)
        {
            //si i peut divise num sans reste
            if (num % i == 0)
            {
                //affiche le facteur
                printf("%d", i);
                //si ce n'est pas le dernier facteur
				//on affiche une etoile
                if (num != i)
                    printf("*");
                //divise num par i pour continuer la factorisation
                num /= i;
            }
            else
				//et on incremente
                i++;
	}
	printf("\n");
}
