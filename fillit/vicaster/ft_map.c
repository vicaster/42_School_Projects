/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/29 12:49:16 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/05 18:47:52 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		check_line(char *line)
{
	int		i;

	i = 0;
	while (line[i])
	{
		if (line[i] != '.')
			return (1);
		i++;
	}
	return (0);
}

int		check_col(char **tetri, int x)
{
	int		y;

	y = 0;
	while (tetri[y])
	{
		if (tetri[y] && tetri[y][x] && tetri[y][x] != '.')
			return (1);
		y++;
	}
	return (0);
}

int		ft_check_place(char **tetri, t_tetri *stru, int x, int y)
{
	int		tmpx;
	int		tmpi;
	int		tmpj;
	int		bol;

	tmpi = stru->i;
	tmpj = stru->j;
	tmpx = x;
	bol = 0;
	while (stru->tab[y] && tetri[tmpi])
	{
		if (tetri[tmpi][tmpj] != '.')
			if (stru->tab[y][tmpx] == '.')
				bol++;
		if (tetri[tmpi][tmpj] == '\0')
		{
			tmpj = stru->j;
			tmpi++;
			tmpx = x;
			y++;
		}
		else
		{
			tmpj++;
			x++;
		}
	}
	if (!bol == 4)
		return (0);
	return (1);
}

void	ft_paste(char **tetri, t_tetri *stru, int x, int y)
{
	int		tmpj;
	int		tmpx;

	tmpj = stru->j;
	tmpx = x;
	while (stru->tab[y] && tetri[stru->i])
	{
		stru->tab[y][x] = tetri[stru->i][stru->j];
		if (tetri[stru->i][stru->j] == '\0')
		{
			stru->i++;
			stru->j = tmpj;
			y++;
			x = tmpx;
		}
		else
		{
			x++;
			stru->j++;
		}
	}
}

char	**backtracking(char **tetri, t_tetri *stru, int x, int y)
{
	
}

char	**ft_opti_tetri(char **tetri, t_tetri *stru, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (check_col(tetri, j) == 0)
		j++;
	while (check_line(tetri[i]) == 0)
		i++;
	stru->i = i;
	stru->j = j;
	stru->tab = backtracking(tetri, stru, x, y);
	return (stru->tab);
}
