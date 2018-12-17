/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:03:48 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/17 19:24:43 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int		main(int ac, char **av)
{
	char			**bdd;
	t_stru			**stru;
	int				i;

	i = 0;
	bdd = ft_bdd();
	if (!(stru = (t_stru**)malloc(sizeof(stru) * 27)))
		return (0);
	if (ac != 2)
	{
		ft_putstr("usage : fillit file\n");
		return (0);
	}
	reader(open(av[1], O_RDONLY), bdd, &i, stru);
	ft_free_tab(bdd);
	prefillit(stru, i);
	free(stru);
	return (0);
}
