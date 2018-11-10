/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 14:53:29 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/10 19:50:45 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fill_map(char **tab, t_list *list)
{
	int		i;
	int		j;
	char	*str;
	int		boolean;

	i = 0;
	j = 0;
	boolean = 0;
	while (list->next)
	{
		str = list->content;
		while (str[i])
		{
			if (str[i] != '.' && tab[j] == '.')
			{
				
			}
			i++;
		}
		list = list->next;
	}
	return (tab);
}
