/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tools.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 18:01:57 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/13 15:18:44 by vicaster    ###    #+. /#+    ###.fr     */
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
	int		x;
	int		y;
	char	**tab;

	i = 0;
	x = 0;
	y = 0;
	tab = ft_memalloc(5);
	while (i <= 5)
		tab[i++] = ft_memalloc(5);
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
		{
			x = 0;
			y++;
		}
		if (buff[i] != '.')
			tab[y][x] = buff[i];
		i++;
		x++;
	}
	return (tab);
}

t_lst	*ft_fill_list(int fd, int i)
{
	int		ret;
	char	*buff;
	char	**tetri;
	t_lst	*start;
	t_lst	*list;

	start->prev = NULL;
	if (!(buff = ft_memalloc(21)))
		ft_print_error();
	while ((ret = read(fd, buff, 21)) && i <= 26)
	{
		if (ret != 21 && ret != 0)
			ft_print_error();
		buff[ret] = '\0';
		if (ft_check_errors(fd, buff) == 1)
		{
			ft_replace(buff, i);
			tetri = ft_tetriminos(buff);
			ft_puttab(tetri);
			list = ft_lstnew(*tetri, 21);
			ft_push_back(&start, list);
		}
		i++;
	}
	return (list);
}

char    **ft_init_tab(int size)
{
    char    **tab;
    int     i;
    int     j;

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
        tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
    return (tab);
}
