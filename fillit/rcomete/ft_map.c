/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/29 12:49:16 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/05 16:25:01 by vicaster    ###    #+. /#+    ###.fr     */
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

char	**ft_paste(char **tetri, t_tetri *stru, int x, int y)
{
	int		bol;
	int		tmpj;
	int		start;

	bol = 0;
	tmpj = stru->j;

	while (stru->tab[y] && tetri[stru->i])
	{
		if (stru->tab[y][x] != '.')
		{
			if(stru->tab[y][x] == '\0')
			{
				y ++;
				x = 0;
			}
			else
				x++;
		}
		else
			ft_check_place(tetri, stru, x, y);
		if (ft_check_place == 0)
		{
			if (stru->tab[y])
			{
				x++;
				ft_paste(tetri, stru, x, y);
			}
			if (stru->tab[y] == NULL)
			{
				if (stru->nb_tetri > 0)
				{
					stru->nb_tetri--;
					x++;
					if (stru->tab[y][x] == '\0')
					{
						x = 0;
						y++;
					}
					ft_paste(tetri, stru, x, y);
				}
				if (stru->nb_tetri == 0)
				{
					while (stru->tab[y])
						ft_memdel((void*)stru->tab[y++]);
					stru->tab = NULL;
					return(stru->tab);
				}
			}
		}
		else
			start = x;
			while (tetri[stru->i])
			{
				while (bol < 4 && tetri[stru->i][stru->j] == 65 + stru->nb_tetri)
				{
					stru->tab[y][x] = tetri[stru->i][stru->j];
					bol++;
				}
				stru->j++;
				x++;
			}
			stru->i++;
			stru->j = tmpj;
			y++;
			x = start;
	}
			stru->nb_tetri++;
	return (stru->tab);
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
	stru->tab = ft_paste(tetri, stru, x, y);
	return (stru->tab);
}
