#include <stdio.h>
#include <stdlib.h>

//c'est des maths à nouveau
int	main(int ac, char **av)
{
        int number1 = atoi(av[1]);
        int number2 = atoi(av[2]);
        
        if (number1 > 0 && number2 > 0)
        {
			//comme on cherche a trouver le plus grand dénominateur commun
			//on veut que nos deux int aient la meme valeur
            while (number1 != number2)
            {
				//donc si number1 est plus grand on le soustrait
				//et inversement pour number2
                if (number1 > number2)
                    number1 = number1 - number2;
                else
                    number2 = number2 - number1;
            }
			//et on affiche le plus grand dénominateur commun ensuite
            printf("%d", number1);
        }
    }
    printf("\n");
}
