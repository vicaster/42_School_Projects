/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/20 15:06:26 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 20:33:11 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_check_error(int fd)
{
	char	buff2[0];

	if (BUFF_SIZE <= 0)
		return (-1);
	if (fd <= 0 || read(fd, buff2, 0) == -1)
		return (-1);
	else
		return (1);
}

int		get_next_line(const int fd, char **line)
{
	int		res;
	int		i;
	char	*tmp;
	char	buff[BUFF_SIZE + 1];

	i = 0;
	if (ft_check_error(fd) == -1)
		return (-1);
	*line[0] = '\0';
	while ((res = read(fd, buff, BUFF_SIZE)) != 0)
	{
		buff[res] = '\0';
		*line = ft_strcdup(buff, '\n');
		tmp = ft_strcendup(buff, '\n');
		if (res != 0)
			return (1);
	}
	return (0);
}
