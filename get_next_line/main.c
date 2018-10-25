#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
#include "libft/libft.h"
# define GET_NEXT_LINE_H
# define GREEN "\x1b[32m"
# define BLUE "\x1b[34m"
# define RED "\x1b[31m"
# define YLW "\x1b[33m"
# define NC "\x1b[0m"

int		main(int ac, char **av)
{
	int		fd;
	int		call;
	int		i;
	int		gnl_ret;
	char	*line;

	i = 0;
	fd = 0;
	call = 0;
	if (ac > 1)
		call = ft_atoi(av[1]);
	if ((fd = open(av[2], O_RDONLY)) == -1)
	{
		printf(RED"%s is not a valid file.\n"NC, av[2]);
		return (0);
	}
	while (call)
	{
		gnl_ret = get_next_line(fd, &line);
		if (gnl_ret == 1)
		{
			i++;
			printf(BLUE"FD "YLW"#%d"NC"|%s\n", fd, line);
		}
		else if (gnl_ret == -1)
		{
			printf("ERREUR DANS GET NEXT LINE SUR FILE DESCRIPTOR #%d\n", fd);
			return (0);
		}
		else if (!gnl_ret)
		{
			printf(YLW"LECTURE TERMINEE\n"NC);
			return (0);
		}
		call--;
	}
	return (0);
}
