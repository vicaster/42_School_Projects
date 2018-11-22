/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:42:25 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 18:25:53 by vicaster    ###    #+. /#+    ###.fr     */
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

void	fillit(int fd, int size_tab)
{
	int		i;
	char	**tab;
	char	***tetri;

	i = 0;
	tetri = ft_fill_tetri(fd, i);
//	tab = ft_init_tab(size_tab);
//	if (ft_fill_map(tab, tetri) == NULL)
//		fillit(fd, size_tab++);
}
