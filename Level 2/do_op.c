#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if  (argc == 4)
	{
		//si le deuxieme argument corresopnd à un signe on effectue
		//le bon calcul avec atoi
		if (*argv[2] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (*argv[2] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (*argv[2] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if (*argv[2] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
