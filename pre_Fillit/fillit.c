/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:42:25 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 17:09:39 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(int fd)
{
	int		i;
	int		size_tab;
	char	**tab;

	i = 0;
	size_tab = 2;
	ft_fill_list(fd, i);
	tab = ft_init_tab(size_tab);
	tab = ft_fill_map(tab);
}
