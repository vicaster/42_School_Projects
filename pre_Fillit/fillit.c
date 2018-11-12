/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 15:42:25 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/12 16:20:43 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(int fd, int size_tab)
{
	int		i;
	char	**tab;
	t_lst	*list;

	i = 0;
	list = ft_fill_list(fd, i);
	tab = ft_init_tab(size_tab);
	if (ft_fill_map(tab, list) == -1)
		fillit(fd, size_tab++);
}
