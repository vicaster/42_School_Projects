/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_errors.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 15:53:41 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/04 18:05:25 by vicaster    ###    #+. /#+    ###.fr     */
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
	buff[19] != '\n')
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
			if (i > 0 && buff[i - 1] == '#')
				nb++;
			if (i <= 20 && buff[i + 1] == '#')
				nb++;
			if (i >= 5 && buff[i - 5] == '#')
				nb++;
			if (i <= 15 && buff[i + 5] == '#')
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
	while (buff[i] != '\n' && buff[i + 1] != '\n' && buff[i + 1] != '\0')
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
