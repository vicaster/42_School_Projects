/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 14:53:29 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/12 18:53:08 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fill_map(char **tab, t_lst *list)
{
	int		i;
	int		x;
	int		y;
	char	*str;

	i = 0;
	x = 0;
	y = 0;
	while (list->next)
	{
		str = list->data;
		while (str[i])
		{
			if (str[i] != '.' && tab[x][y] == '.')
			{
				
			}
			i++;
		}
		list = list->next;
	}
	return (0);
}
