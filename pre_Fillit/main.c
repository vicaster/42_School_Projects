/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 13:57:00 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/12 15:20:45 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	int		size_tab;

	if (ac == 2)
	{
		size_tab = 2;
		if (!(fd = open(av[1], O_RDONLY)))
		{
			ft_putendl("error");
			return (0);
		}
		fillit(fd, size_tab);
	}
	else
	{
		ft_putstr("usage: ");
		ft_putstr(av[0]);
		ft_putendl(" <file>");
	}
	return (0);
}
