/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/30 15:12:11 by vicaster     #+#   ##    ##    #+#       */
<<<<<<< HEAD
/*   Updated: 2018/10/31 15:52:14 by vicaster    ###    #+. /#+    ###.fr     */
=======
/*   Updated: 2018/10/30 19:33:10 by vicaster    ###    #+. /#+    ###.fr     */
>>>>>>> 16443d7b47f6c9ecb1d027acf653239a95a82f73
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_fill_tmp(char **line, char **tmp)
{
	char	*str;

<<<<<<< HEAD
	if (!(*line = ft_strndup(*tmp, ft_strcspn(*tmp, "\n"))))
		return (-1);
	if (ft_strchr(*tmp, '\n'))
	{
		if (!(str = ft_strdup(*tmp + ft_strcspn(*tmp, "\n") + 1)))
			return (-1);
	}
=======
	*line = ft_strndup(*tmp, ft_strcspn(*tmp, "\n"));
	if (ft_strchr(*tmp, '\n'))
		str = ft_strdup(*tmp + ft_strcspn(*tmp, "\n") + 1);
>>>>>>> 16443d7b47f6c9ecb1d027acf653239a95a82f73
	else
		str = NULL;
	if (str)
	{
		ft_strdel(tmp);
		*tmp = str;
	}
	else
		ft_strdel(tmp);
<<<<<<< HEAD
	if (!*line[0] && !*tmp)
=======
	if (*line[0] == '\0' && !*tmp)
>>>>>>> 16443d7b47f6c9ecb1d027acf653239a95a82f73
		return (0);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*tmp[5000];
	int			res;
	char		*str_tmp;
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || !line || BUFF_SIZE <= 0 || read(fd, NULL, 0) < 0)
		return (-1);
	if (fd >= 5000)
		return (-1);
	if (tmp[fd] == NULL)
<<<<<<< HEAD
	{
		if (!(tmp[fd] = ft_memalloc(BUFF_SIZE + 1)))
			return (-1);
	}
	while ((res = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[res] = '\0';
		if (!(str_tmp = ft_strjoin(tmp[fd], buff)))
			return (-1);
=======
		tmp[fd] = ft_memalloc(1);
	while ((res = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[res] = '\0';
		str_tmp = ft_strjoin(tmp[fd], buff);
>>>>>>> 16443d7b47f6c9ecb1d027acf653239a95a82f73
		ft_strdel(&tmp[fd]);
		tmp[fd] = str_tmp;
		if (ft_strchr(tmp[fd], '\n'))
			break ;
	}
<<<<<<< HEAD
	return (ft_fill_tmp(line, &tmp[fd]));
=======
	if (ft_fill_tmp(line, &tmp[fd]) == 1)
		return (1);
	ft_strdel(line);
	return (0);
>>>>>>> 16443d7b47f6c9ecb1d027acf653239a95a82f73
}
