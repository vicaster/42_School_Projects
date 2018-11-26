/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 14:53:29 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/26 19:38:48 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

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

char	**ft_paste(char **tetri, char **tab, int i, int j)
{
	int		x;
	int		y;
	int		bol;
	int		tmpj;

	x = 0;
	y = 0;
	bol = 0;
	tmpj = j;
	while (tab[y])
	{
		while (tetri[i][j] && tab[y][x])
		{
			if (tetri[i][j] != '.' && tetri[i][j] != '\0')
			{
				tab[y][x] = tetri[i][j];
				bol++;
			}
			j++;
			x++;
		}
		i++;
		j = tmpj;
		x = 0;
		y++;
	}
	if (!tab[y] && bol < 4)
		tab = NULL;
	return (tab);
}

char	**ft_opti_tetri(char **tetri, char **tab)
{
	int		y;
	int		x;

	y = 0;
	x = 0;
	while (check_col(tetri, x) == 0)
		x++;
	while (check_line(tetri[y]) == 0)
		y++;
	tab = ft_paste(tetri, tab, y, x);
	return (tab);
}

char	**ft_fill_map(char **tab, char ***tetri)
{
	int		a;

	a = 0;
	while (tetri[a])
	{
		tab = ft_opti_tetri(tetri[a], tab);
		a++;
	}
	if (tab == NULL)
		return (NULL);
	return (tab);
}
