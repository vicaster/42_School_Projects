/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_set0.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:08:55 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/11 18:36:26 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_tetri_check_c(char **stru, int c)
{
	int	l;

	l = 0;
	while (l < 4)
	{
		if (stru[l][c] == '#')
			return (0);
		l++;
	}
	return (1);
}

void	ft_tetri_set0c(char **stru, int c)
{
	int	l;

	l = 0;
	while (l < 4)
	{
		if (stru[l][c] == '.')
			stru[l][c] = '0';
		l++;
	}
}

int		ft_tetri_check_l(char **stru, int l)
{
	int c;

	c = 0;
	while (c < 4)
	{
		if (stru[l][c] == '#')
			return (0);
		c++;
	}
	return (1);
}

void	ft_tetri_set0l(char **stru, int l)
{
	int	c;

	c = 0;
	while (c < 5)
	{
		if (stru[l][c] != '#')
			stru[l][c] = '0';
		c++;
	}
}
