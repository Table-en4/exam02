//pgcd = plus grand denominateur commun
//c'est des maths faut juste apprendre la formule
int	ft_pgcd(int a, int b)
{
	int	tmp;

	tmp = b;
	while (b != 0)
	{
		b = a % b;
		a = tmp;
	}
	return (a);
}

//lcm = plus petit denominateur commun
//encore une fois faut juste apprendre les formules
//faites moi un retour si vous souhaitez plus de detaille
//sur le fonctionnement des fonctions maths
unsigned int	ft_lcm(unsigned int a,unsigned int b)
{
	int A;
	int	B;
	int	res;

	A = a;
	B = b;
	if (a == 0 || b == 0)
		return (0);
	if (a < 0)
		A = -a;
	if (b < 0)
		B = -b;
	res = (A / ft_pgcd(A, B)) * B;
	return (res);
}
