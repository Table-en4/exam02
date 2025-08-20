typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

//pour utiliser NULL tu connaiiiiis !!!
#include <stddef.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	//classique on verifie si les tableaux sont null ou non
	if ((*begin_list == NULL) || (begin_list == NULL))
		return ;
	//si la donnee du maillon actuel
	//est = a celle qu'on veut virer
	if (cmp((*begin_list)->data, data_ref) == 0x0)
	{
    	//on garde une trace vers le maillon
		//qu'on va supprimer
    	tmp = *begin_list;

    	//on saute ce maillon dans la liste
    	*begin_list = (*begin_list)->next;

    	//on libere la memoire du maillon qu'on vient de virer
    	free(tmp);

    	//on continue a checker le reste de la liste
    	ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
    //si le maillon actuel est ok on passe au suivant
    ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);

}
