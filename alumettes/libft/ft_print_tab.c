/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_tab.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/26 15:48:05 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/26 16:25:24 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab(char **tab)
{
	int		i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_putendl(tab[i]);
			i++;
		}
	}
}
