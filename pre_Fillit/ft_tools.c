/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tools.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 18:01:57 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 19:22:17 by vicaster    ###    #+. /#+    ###.fr     */
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

void	ft_fill_list(int fd)
{
	int		ret;
	int		i;
	char	*buff;
	t_list	*start;
	t_list	*list;

	i = 0;
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
			list = ft_lstnew(buff, 21);
			ft_push_back(&start, list);
//			list->air = ft_calcul_air(buff);
		}
		i++;
	}
}
