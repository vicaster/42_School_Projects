/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reader.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:11:35 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 19:00:09 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	reader(int fd, char **bdd, int *i, t_stru **stru)
{
	char	buff[22];
	char	*str;
	char	*tc;
	int		ret[2];

	while (((ret[0] = read(fd, buff, 21)) != 0) && *i <= 26)
	{
		buff[20] = '\0';
		if (check_buf(buff) == 1)
		{
			!(tc = ft_tetri_clean(buff)) ? ft_error() : 0;
			str = ft_strdup(tc);
			stru[*i] = ft_stock(tetri_cmp(bdd, str), *i, 0);
			free(str);
			free(tc);
		}
		else
			exit(0);
		(*i)++;
		ret[1] = ret[0];
	}
	if (*i > 26)
		ft_error();
	ret[0] == 0 && (*i == 0 || ret[1] != 20) ? ft_error() : 0;
	stru[*i] = ft_stock(-1, -1, -1);
}
