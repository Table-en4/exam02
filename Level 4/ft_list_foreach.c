//blablabla gngngngn on ajoute le fichier ft_list.h
//bref vous connaissez la chancon


typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

//on l'utilise pour importer NULL
#include <stddef.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	//on parcours notre liste
	while (begin_list != NULL)
	{
		//si on est pas a la fin on applique chaque
		//element de notre liste a la fonction f
		if (begin_list->data != NULL)
			(*f)(begin_list->data);
		//on met a jour la variable begin_list
		//pour avancer dans la boucle
		begin_list = begin_list->next;
	}
}
