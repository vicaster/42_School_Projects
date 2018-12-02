/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_board.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vic <vic@student.le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/02 18:32:37 by vic          #+#   ##    ##    #+#       */
/*   Updated: 2018/12/02 18:32:57 by vic         ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "alum.h"

int		ft_verif_number(char *num)
{
	int	i;
	int	number;

	i = 0;
	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9')
			return (-1);
		i++;
	}
	number = ft_atoi(num);
	return (number);
}

int		*ft_get_standart(void)
{
	char	*line;
	int		i;
	int		*tab;

	if (!(tab = malloc(sizeof(int) * NUM_ROW)))
		return (NULL);
	i = 0;
	while (1)
	{
		get_next_line(0, &line);
		if (ft_strcmp(line, ""))
			break;
		printf("|%s|\n", line);
		if ((tab[i] = ft_verif_number(line)) < 0)
			return (NULL);
		i++;
		free(line);
	}
	return (tab);
}

int		*ft_get_file(const char *file, int max)
{
	int		fd;
	int		op;
	char	*line;
	int		*tab;
	int		i;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * max)))
		return (NULL);
	i = 0;
	while (get_next_line(fd, &line))
	{
		if ((tab[i] = ft_verif_number(line)) < 0)
			return (NULL);
		i++;
		free(line);
	}
	return (tab);
}
