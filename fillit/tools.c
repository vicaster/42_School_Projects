/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tools.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:12:12 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 11:40:59 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_initab(int size)
{
	char	**tab;
	int		i;

	i = 0;
	if (!(tab = ft_memalloc((sizeof(tab) * (size + 1)))))
		return (NULL);
	while (i < size)
	{
		tab[i] = ft_memalloc(size + 2);
		ft_memset(tab[i], '.', size);
		tab[i][size] = '\n';
		tab[i][size + 1] = '\0';
		i++;
	}
	return (tab);
}

int		ft_cmptmap(char **tab, char *str, t_pose *xy)
{
	int		i;
	int		j;
	int		k;

	i = X;
	k = -1;
	while (str[++k] && tab[i])
	{
		j = Y;
		while (str[k] != '\n' && tab[i][j])
		{
			if (tab[i][j] == '.' || str[k] == '.')
				k++;
			else
				return (0);
			j++;
		}
		if (str[k] == '\n' && !str[k + 1] && !tab[i + 1])
			return (1);
		if (str[k] == '\n')
			i++;
	}
	if (!tab[i] && str[k] != '\n')
		return (0);
	return (1);
}

void	ft_fill(char **tab, char *str, t_pose *xy, char c)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	i = X;
	while (str[k] && tab[i])
	{
		j = Y;
		while (str[k] != '\n' && tab[i][j])
		{
			if (str[k] == '#' && tab[i][j] == '.')
				tab[i][j] = c;
			k++;
			j++;
		}
		if (str[k] == '\n')
			i++;
		k++;
	}
}

void	ft_clear(char **tab, char *str, t_pose *pose)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	i = pose->x;
	while (str[k] && tab[i])
	{
		j = pose->y;
		while (str[k] != '\n' && tab[i][j])
		{
			if (str[k] == '#' && tab[i][j] != '\n')
				tab[i][j] = '.';
			k++;
			j++;
		}
		if (str[k] == '\n')
			i++;
		k++;
	}
}

void	ft_printtab(char **str)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		ft_putstr(str[i]);
		free(str[i]);
		i++;
	}
}
