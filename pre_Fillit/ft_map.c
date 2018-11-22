/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 14:53:29 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 17:45:51 by vicaster    ###    #+. /#+    ###.fr     */
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

char	**ft_opti_tetri(char **tetri)
{
	char	*tmp;
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
	
}

int		ft_fill_tab_with_tetri(char **tetri, char **tab, int x, int y)
{
	char	**tmp;

	tmp = ft_opti_tetri(tetri);
}

char	**ft_backtracking(char ***tetri, char **tab)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (tetri[i])
	{
		tab = ft_fill_tab_with_tetri(tetri[i], tab, x, y);
	}
	return (tab);
}

char	**ft_fill_map(char **tab, char ***tetri)
{
	tab = ft_backtracking(tetri, tab);
	if (tab == NULL)
		return (NULL);
	return (tab);
}
