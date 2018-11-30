/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tools.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 18:01:57 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/29 17:52:31 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_error(void)
{
	ft_putendl("error");
	exit(0);
}

void	ft_replace(char *buff, int i)
{
	int		j;

	j = 0;
	while (buff[j])
	{
		if (buff[j] == '#')
			buff[j] = 'A' + i;
		j++;
	}
}

char	**ft_tetriminos(char *buff)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * 5)))
		ft_print_error();
	while (i < 4)
	{
		tab[i] = ft_strndup(buff + j, 4);
//		ft_putendl(tab[i]);//        affichage Tetriminos
		i++;
		j += 5;
	}
//	ft_putchar('\n');
	tab[i] = NULL;
	return (tab);
}

char	***ft_fill_tetri(char ***tetri, int fd, int i, t_tetri *strustru)
{
	int		ret;
	char	buff[22];

	while ((ret = read(fd, buff, 21)) && i <= 26)
	{
		buff[ret] = '\0';
		if (ret != 21 && ret != 0)
			ft_print_error();
		if (ft_check_errors(fd, buff) == 1)
		{
			ft_replace(buff, i);
			tetri[i] = ft_tetriminos(buff);
		}
		i++;
	}
	strustru->nb_tetri = i;
	return (tetri);
}

char	**ft_init_tab(int size)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	tab = (char**)malloc(sizeof(char*) * (size + 1));
	while (i < size)
	{
		j = 0;
		tab[i] = (char*)malloc(sizeof(char) * (size + 1));
		while (j < size)
		{
			tab[i][j] = '.';
			j++;
		}
//		ft_putendl(tab[i]); //     affichage Tab
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
