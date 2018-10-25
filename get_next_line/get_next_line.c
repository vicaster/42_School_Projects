#include "get_next_line.h"

#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	int			res;
	int			i;
	char		*str_tmp;
	static char	*tmp = NULL;
	char		buff[BUFF_SIZE + 1];

	i = 0;
	if (BUFF_SIZE <= 0 || !line || read(fd, buff, 0) == -1 || fd < 1
			|| fd > 50)
		return (-1);
	if (!(*line = (char*)malloc(sizeof(char))))
		return (0);
	if (tmp)
	{
		if (ft_strchr(tmp, '\n') != NULL)
		{
			*line = ft_strndup(tmp, ft_strcspn(tmp, "\n"));
			str_tmp = ft_strdup(tmp + ft_strcspn(tmp, "\n") + 1);
			free(tmp);
			if (str_tmp)
			{
				tmp = ft_strdup(str_tmp);
				free(str_tmp);
			}
			return (1);
		}
		*line = ft_strndup(tmp, ft_strcspn(tmp, "\n"));
	}
	while ((res = read(fd, buff, BUFF_SIZE)) != 0)
	{
		buff[res] = '\0';
		tmp = ft_strjoin(*line, buff);
		if (ft_strchr(tmp, '\n') != NULL)
		{
			*line = ft_strndup(tmp, ft_strcspn(tmp, "\n"));
			str_tmp = ft_strdup(tmp + ft_strcspn(tmp, "\n") + 1);
			free(tmp);
			tmp = ft_strdup(str_tmp);
			free(str_tmp);
			return (1);
		}
		free(*line);
		*line = ft_strdup(tmp);
		free(tmp);
	}
	return (0);
}
