//flemme de creer un fichier flood.h
//donc on va juste creer la structure ici
//mais en exam faut mettre cette structure 
//dans un fichier flood_fil.h comme ca :
//				#include "flood_fil.h"

typedef struct  s_point
  {
    int           x;
    int           y;
  }  t_point;

void	fill(char	**tab, t_point size, char target, int row, int col)
{
	//grosso modo on check si les valeurs sont dans le tableau
	if (row < 0 || col < 0 || row >= size.y || col >= size.x)
        return ;
	//flood fill passe sur chaque case du tableau donc on verifie
	//qu'on repasse deux fois sur la meme case
	if (tab[row][col] == 'F' || tab[row][col] != target)
        return ;
	tabp[row][col] = 'F';

	//bon la c'est la logique de flood_fill
	//en gros on a une map 2D le but va etre
	//de se deplacer dans toutes les directions
	//possibles donc en x et y et on evite les
	//cases sur lesquels on est deja passe avec F
	fill(tab, size, target, row -1, col);
	fill(tab, size, target, row +1, col);
	fill(tab, size, target, row, col -1);
	fill(tab, size, target, row, col +1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	//on initialise le tableau
	char	target = tab[begin.y][begin.x];
	//IMPORTANT toujours mettre y avant x
	fill(tab, size, target, begin.y, begin.x);
}
