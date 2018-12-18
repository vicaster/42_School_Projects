/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reader.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:11:35 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 12:31:47 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	reader(int fd, char **bdd, int *i, t_stru **stru)
{
	char	buff[22];
	int		ret;
	char	*str;
	int		lret;
	char	*tc;

	while (((ret = read(fd, buff, 21)) != 0) && *i < 26)
	{
		buff[20] = '\0';
		if (check_buf(buff) == 1)
		{
			if (!(tc = ft_tetri_clean(buff)))
				exit(0);
			str = ft_strdup(tc);
			stru[*i] = ft_stock(tetri_cmp(bdd, str), *i, 0);
			free(str);
			free(tc);
		}
		else
			exit(0);
		(*i)++;
		lret = ret;
	}
	ret == 0 && (*i == 0 || lret != 20) ? ft_error() : 0;
	stru[*i] = ft_stock(-1, -1, -1);
}
