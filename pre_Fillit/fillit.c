/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:42:25 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 14:51:53 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_errors(int fd, char *buff)
{
	if ((ft_count_pt(buff) == 12) && (ft_count_charp(buff) == 4) &&
	(ft_count_unn(buff) == 1) && (ft_check_neighbour(buff) == 1) &&
	(ft_check_lines(buff) == 1))
		return (1);
	return (0);
}

char	**fillit(int size_tab, char ***tetri, t_tetri *strustru)
{
	char	**tab;
	int		x;
	int		y;
	int		nb_tetri;

	x = 0;
	y = 0;
	tab = ft_init_tab(size_tab);
	tab = ft_fill_map(tab, tetri, x, y, strustru);
	if (tab == NULL)
	{
		size_tab++;
		fillit(size_tab, tetri, strustru);
	}
	ft_print_tab(tab);
	return (tab);
}
