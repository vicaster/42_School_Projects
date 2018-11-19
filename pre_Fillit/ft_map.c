/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 14:53:29 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/19 18:37:06 by vicaster    ###    #+. /#+    ###.fr     */
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

char	**ft_fill_tab(char ***tetri, char **tab)
{
	
}

char	**ft_fill_map(char **tab, char ***tetri)
{
	int		i;

	i = 0;
	while (tetri[i])
	{
		tab = ft_fill_tab(tetri, tab);
		if (tab == NULL)
			return (NULL);
		i++;
	}
	return (tab);
}
