/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:07:26 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 12:13:12 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	prefillit(t_stru **stru, int i)
{
	int		size;
	char	**tab;
	char	**bdd;

	bdd = ft_bdd();
	size = ft_sqrt(i * 4);
	tab = ft_initab(size);
	stru[0]->max = size;
	while (fillit(tab, stru, 0, bdd) != 1)
	{
		size++;
		stru[0]->max = size;
		ft_free_tab((void*)tab);
		tab = ft_initab(size);
	}
	ft_printtab(tab);
	ft_free_tab((void*)tab);
	ft_free_tab((void*)bdd);
}

int		fillit(char **tab, t_stru **stru, int p, char **bdd)
{
	t_pose		*xy;

	if (stru[p]->x == -1)
		return (1);
	if (!((xy = malloc(sizeof(xy)))))
		return (0);
	X = -1;
	while (++X < stru[0]->max)
	{
		Y = -1;
		while ((++Y < stru[0]->max))
		{
			if (ft_cmptmap(tab, bdd[stru[p]->x], xy))
			{
				ft_fill(tab, bdd[stru[p]->x], xy, stru[p]->a);
				if (fillit(tab, stru, p + 1, bdd))
					return (1);
				ft_clear(tab, bdd[stru[p]->x], xy);
			}
		}
	}
	free(xy);
	return (0);
}
