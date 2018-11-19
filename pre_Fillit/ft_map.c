/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 14:53:29 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/16 16:04:06 by vicaster    ###    #+. /#+    ###.fr     */
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

int		ft_copy_tetri_to_tab(char **tab, char **tetri, int i, int j)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (tetri[i] || tab[y])
	{
		tab[y][x++] = tetri[i][j++];
		if (tab[y][x] == '\0' || tetri[i][j] == '\0')
		{

		}
	}
}

char	**ft_fill_tab(char **tetri, char **tab, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
		while (tetri[i][j] == '.')
		{
			i++;
			if (tetri[i] == NULL)
			{
				i = 0;
				j++;
			}
		}
		i = 0;
		while (check_line(tetri[i] == 0))
			i++;
		tab = ft_copy_tetri_to_tab(tab, tetri, i, j);
	i++;
	return (tab);
}

char	**ft_fill_map(char **tab, char ***tetri)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	if ()
		tab = ft_fill_tab(tetri[i], tab, x, y);
	return (tab);
}
