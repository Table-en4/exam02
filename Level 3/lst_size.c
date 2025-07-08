typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int ft_list_size(t_list *begin_list)
{
	int	i = 0;

	//on incremente jusqu'a la fin de la liste
	while (begin_list->next)
	{
		//on met a jour la liste et on incremente
		begin_list = begin_list->next;
		i++;
	}
	//on return la size
	return i;
}
