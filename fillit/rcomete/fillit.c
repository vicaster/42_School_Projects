/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:42:25 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/03 15:44:44 by vicaster    ###    #+. /#+    ###.fr     */
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

char	**ft_fill_map(int x, int y, t_tetri *stru)
{
	int		a;

	a = 0;
	while (a < stru->nb_tetri)
	{
		stru->tab = ft_opti_tetri(stru->tetri[a], stru, x, y);
		a++;
	}

	if (stru->tab == NULL)
	{
		if (a > 0)
		{
			a--;
			x++;
			ft_fill_map(x, y, stru);
		}
		if (a == 0)
		{
			if (stru->tab == NULL)
				return (NULL);
		}
	}
	return (stru->tab);
}

char	**fillit(int size_tab, char ***tetri, t_tetri *stru)
{
	int		x;
	int		y;
	int		nb_tetri;

	x = 0;
	y = 0;
	stru->tab = ft_init_tab(size_tab);
	stru->tab = ft_fill_map(x, y, stru);
	if (stru->tab == NULL)
	{
		size_tab++;
		fillit(size_tab, tetri, stru);
	}
	return (stru->tab);
}
