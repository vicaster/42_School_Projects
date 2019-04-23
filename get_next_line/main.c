/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 15:06:57 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/07 14:48:41 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd1;
	int		fd2;
	char	*line;

	if ((fd1 = open(av[1], O_RDONLY)) == -1)
		return (-1);
	while (get_next_line(fd1, &line))
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	if (ac == 3)
	{
		if ((fd2 = open(av[2], O_RDONLY)) == -1)
			return (-1);
		while (get_next_line(fd2, &line))
		{
			printf("%s\n", line);
			free(line);
			line = NULL;
		}
	}
	return (0);
}
