/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:42:25 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/13 15:03:35 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(int fd, int size_tab)
{
	int		i;
	char	**tab;
	t_list	*list;

	i = 0;
	size_tab = 0;
	list = ft_fill_list(fd, i);
//	tab = ft_init_tab(size_tab);
//	if (ft_fill_map(tab, list) == -1)
//		fillit(fd, size_tab++);
}
