/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bdd.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:05:09 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/17 19:27:55 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_bdd(void)
{
	char	**bdd;

	if (!(bdd = (char**)malloc(sizeof(char*) * 20)))
		return (NULL);
	bdd[0] = ft_strdup("##\n##\n");
	bdd[1] = ft_strdup("##\n.#\n.#\n");
	bdd[2] = ft_strdup("##\n#.\n#.\n");
	bdd[3] = ft_strdup("###\n..#\n");
	bdd[4] = ft_strdup("###\n#..\n");
	bdd[5] = ft_strdup("####\n");
	bdd[6] = ft_strdup("#\n#\n#\n#\n");
	bdd[7] = ft_strdup("###\n.#.\n");
	bdd[8] = ft_strdup("#.\n##\n#.\n");
	bdd[9] = ft_strdup(".#.\n###\n");
	bdd[10] = ft_strdup(".#\n##\n.#\n");
	bdd[11] = ft_strdup(".##\n##.\n");
	bdd[12] = ft_strdup("#.\n##\n.#\n");
	bdd[13] = ft_strdup("##.\n.##\n");
	bdd[14] = ft_strdup(".#\n##\n#.\n");
	bdd[15] = ft_strdup(".#\n.#\n##\n");
	bdd[16] = ft_strdup("#.\n#.\n##\n");
	bdd[17] = ft_strdup("..#\n###\n");
	bdd[18] = ft_strdup("#..\n###\n");
	bdd[19] = NULL;
	return (bdd);
}

int			tetri_cmp(char **bdd, char *str)
{
	int		i;

	i = 0;
	while (bdd[i] && (ft_strcmp(bdd[i], str) != 0))
	{
		i++;
	}
	return (i);
}

t_stru		*ft_stock(int x, int i, int m)
{
	t_stru *stru;

	stru = malloc(sizeof(*stru));
	if (stru)
	{
		stru->x = x;
		stru->a = 'A' + i;
		stru->max = m;
	}
	return (stru);
}
