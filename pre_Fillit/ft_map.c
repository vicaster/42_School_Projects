/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/29 12:49:16 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/29 16:09:37 by vicaster    ###    #+. /#+    ###.fr     */
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

char	**ft_paste(char **tetri, char **tab, int i, int j, int x, int y)
{
	int		bol;
	int		tmpj;

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

char	**ft_opti_tetri(char **tetri, char **tab, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (check_col(tetri, j) == 0)
		j++;
	while (check_line(tetri[i]) == 0)
		i++;
	tab = ft_paste(tetri, tab, i, j, x, y);
	return (tab);
}

char	**ft_fill_map(char **tab, char ***tetri, int x, int y, t_tetri *strustru)
{
	unsigned long		a;

	a = 0;
	while (a < strustru->nb_tetri)
	{
		tab = ft_opti_tetri(tetri[a], tab, x, y);
		a++;
		dprintf(1, "a = %zu\n", a);
		ft_print_tab(tab);
		ft_putchar('\n');
	}

//	if (&ft_opti_tetri == NULL)
//	{
//		if (a > 0)
//		{
//			a--;
//			x++;
//			ft_fill_map(tab, tetri, x, y);
//		}
//		if (a == 0)
//		{
			if (tab == NULL)
				return (NULL);
//		}
//	}
	return (tab);
}
