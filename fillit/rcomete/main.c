/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 13:57:00 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/03 12:20:49 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_size_opti(t_tetri *stru)
{
	size_t	size;

	size = 2;
	while ((stru->nb_tetri * 4) > (size * size))
		size++;
	printf("size_tab = %zu\n", size);
	return (size);
}

int		main(int ac, char **av)
{
	int		size_tab;
	t_tetri	stru;
	int		i;
	int		fd;

	i = 0;
	if (ac == 2)
	{
		if (!(fd = open(av[1], O_RDONLY)))
			ft_print_error();
		if (!(stru.tetri = ft_memalloc(sizeof(char**) * 26)))
			ft_print_error();
		stru.tetri = ft_fill_tetri(fd, i, &stru);
		size_tab = ft_size_opti(&stru);
		stru.tetri[stru.nb_tetri] = NULL;
		stru.tab = fillit(size_tab, stru.tetri, &stru);
		ft_print_tab(stru.tab);
	}
	else
	{
		ft_putstr("usage: ");
		ft_putstr(av[0]);
		ft_putendl(" <file>");
	}
	return (0);
}
