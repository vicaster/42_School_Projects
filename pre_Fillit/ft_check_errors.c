/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_errors.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 15:53:41 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 16:25:46 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_count_pt(char *buff)
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

static int	ft_count_charp(char *buff)
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

static int	ft_count_unn(char *buff)
{
	int		nb;

	nb = 0;
	while (*buff)
	{
		if (*buff++ == '\n')
			nb++;
	}
	if (nb != 5)
		ft_print_error();
	return (nb);
}

static int	ft_check_neighbour(char *buff)
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

int			ft_check_errors(int fd, char *buff)
{
	if ((ft_count_pt(buff) == 12) && (ft_count_charp(buff) == 4) &&
	(ft_count_unn(buff) == 5) && (ft_check_neighbour(buff) == 1))
		return (1);
	return (0);
}
