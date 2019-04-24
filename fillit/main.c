/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:03:48 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 17:48:05 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_bddstru(char **bdd, t_stru **stru)
{
	ft_free_tab((void*)bdd, 19);
	ft_free_tab((void*)stru, 27);
	ft_error();
}

void	ft_free_tab(void **tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
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
	if (ac != 2)
	{
		ft_putstr("usage : fillit file\n");
		return (0);
	}
	bdd = ft_bdd();
	if (!(stru = (t_stru**)malloc(sizeof(stru) * 27)))
		return (0);
	while (i < 27)
	{
		stru[i] = NULL;
		i++;
	}
	i = 0;
	reader(open(av[1], O_RDONLY), bdd, &i, stru);
	ft_free_tab((void*)bdd, 19);
	prefillit(stru, i);
	ft_free_tab((void*)stru, 27);
	return (0);
}
