/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/20 15:06:26 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/20 20:20:34 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int		res;
	int		i;
	char	*tmp;
	char	buff[BUFF_SIZE + 1];

	i = 0;
	if (!(*line = (char*)malloc(sizeof(char))))
		return (0);
	if (fd == 0)
		return (0);
	if (fd == -1 || line == NULL)
		return (-1);
	*line[0] = '\0';
	while ((res = read(fd, buff, BUFF_SIZE)) != 0)
	{
		buff[res] = '\0';
		tmp = *line;
		*line = ft_strjoin(tmp, buff);
//		while (*line[i] != '\n' || *line[i])
//			i++;
//		if (tmp[i] == '\n' || tmp[i] == '\0')
//			return (1);
	}
	ft_putstr(*line);
	if (line)
		return (1);
	else
		return (0);
}
