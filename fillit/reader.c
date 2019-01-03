/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reader.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:11:35 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/03 18:03:59 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	opti_line(int *i, int ret[2], char **bdd, t_stru **stru)
{
	if (ret[0] == 0 && (*i == 0 || ret[1] != 20))
		ft_free_bddstru(bdd, stru);
	ret[0] == 0 && (*i == 0 || ret[1] != 20) ? ft_error() : 0;
	stru[*i] = ft_stock(-1, -1, -1);
}

void	reader(int fd, char **bdd, int *i, t_stru **stru)
{
	char	buff[22];
	char	*str;
	char	*tc;
	int		ret[2];

	while (((ret[0] = read(fd, buff, 21)) != 0) && *i <= 26)
	{
		buff[20] = '\0';
		if (check_buf(buff, bdd, stru) == 1)
		{
			!(tc = ft_tetri_clean(buff)) ? ft_error() : 0;
			str = ft_strdup(tc);
			stru[*i] = ft_stock(tetri_cmp(bdd, str), *i, 0);
			ft_strdel(&str);
			ft_strdel(&tc);
		}
		else
			exit(0);
		(*i)++;
		ret[1] = ret[0];
	}
	if (*i > 26)
		ft_error();
	opti_line(i, ret, bdd, stru);
}
