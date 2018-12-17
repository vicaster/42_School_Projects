/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_tetri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:08:06 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/17 14:50:12 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(void)
{
	ft_putstr("error\n");
	exit(0);
}

int		ft_check_tetri(char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
			{
				(j != 0 && tab[i][j - 1] == '#') ? k++ : 0;
				(i != 0 && tab[i - 1][j] == '#') ? k++ : 0;
				(tab[i][j + 1] == '#') ? k++ : 0;
				(i < 3 && tab[i + 1][j] == '#') ? k++ : 0;
			}
			j++;
		}
		i++;
	}
	(k != 6 && k != 8) ? ft_error() : 0;
	return (k);
}

int		check_buf2(int i, int j, int k, char *str)
{
	if (str[i - 1] != '\n' || (i < 20 || i > 21) || j != 4 ||
			(k != 5 && i == 21) || (k != 4 && i == 20))
	{
		return (0);
	}
	else
		return (1);
}

int		checknl(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (((i != 4 && i != 9 && i != 14 && i != 19 && i != 20)
		&& str[i] == '\n') ||
		((i == 4 || i == 9 || i == 14 || i == 19 || i == 20)
		&& str[i] != '\n'))
			return (0);
		i++;
	}
	return (1);
}

int		check_buf(char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			ft_error();
		if (str[i] == '#')
			j++;
		if (str[i] == '\n')
			k++;
		i++;
	}
	if ((check_buf2(i, j, k, str)) && checknl(str))
		return (1);
	ft_error();
	return (0);
}
