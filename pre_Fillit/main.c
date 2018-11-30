/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 13:57:00 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 11:04:35 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_size_opti(t_tetri *strustru)
{
	size_t	size;

	size = 2;
	while ((strustru->nb_tetri * 4) > (size * size))
		size++;
	printf("size_tab = %zu\n", size);
	return (size);
}

int		main(int ac, char **av)
{
	int		size_tab;
	char	***tetri;
	t_tetri	*strustru;
	int		i;
	int		fd;

	i = 0;
	if (ac == 2)
	{
		if (!(strustru = malloc(sizeof(t_tetri))))
			ft_print_error();
		if (!(fd = open(av[1], O_RDONLY)))
		{
			ft_putendl("error");
			return (0);
		}
		if (!(tetri = ft_memalloc(sizeof(char**) * 26)))
			ft_print_error();
		tetri = ft_fill_tetri(tetri, fd, i, strustru);
		tetri[strustru->nb_tetri] = NULL;
		size_tab = ft_size_opti(strustru);
		fillit(size_tab, tetri, strustru);
	}
	else
	{
		ft_putstr("usage: ");
		ft_putstr(av[0]);
		ft_putendl(" <file>");
	}
	return (0);
}
