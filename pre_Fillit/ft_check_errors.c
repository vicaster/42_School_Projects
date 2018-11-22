/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_errors.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 15:53:41 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 18:29:07 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_count_pt(char *buff)
{
	int		nb;

	nb = 0;
	while (*buff)
	{
		if (*buff++ == '.')
			nb++;
	}
	if (nb != 12)
		ft_print_error();
	return (nb);
}

int		ft_count_charp(char *buff)
{
	int		nb;

	nb = 0;
	while (*buff)
	{
		if (*buff++ == '#')
			nb++;
	}
	if (nb != 4)
		ft_print_error();
	return (nb);
}

int		ft_count_unn(char *buff)
{
	if (buff[4] != '\n' || buff[9] != '\n' || buff[14] != '\n' ||
	buff[19] != '\n' || buff[20] != '\n')
	{
		ft_print_error();
		return (0);
	}
	return (1);
}

int		ft_check_neighbour(char *buff)
{
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '#')
		{
			if (buff[i - 1] == '#')
				nb++;
			if (buff[i + 1] == '#')
				nb++;
			if (buff[i - 5] == '#')
				nb++;
			if (buff[i + 5] == '#')
				nb++;
		}
		i++;
	}
	if (nb == 6 || nb == 8)
		return (1);
	ft_print_error();
	return (0);
}

int		ft_check_lines(char *buff)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buff[i] != '\n' && buff[i + 1] != '\n')
	{
		while (buff[i] != '\n')
		{
			i++;
			j++;
		}
		if (j != 4)
		{
			ft_print_error();
			return (0);
		}
		j = 0;
		i++;
	}
	return (1);
}
