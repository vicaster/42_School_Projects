/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vic <vic@student.le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/02 18:33:10 by vic          #+#   ##    ##    #+#       */
/*   Updated: 2018/12/02 18:34:54 by vic         ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "alum.h"

int		ft_get_len_file(const char *file)
{
	int		fd;
	int		op;
	char	*line;
	int		i;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	i = 0;
	while (get_next_line(fd, &line))
	{
		if (ft_verif_number(line) < 0)
			return (0);
		i++;
		free(line);
	}
	return (i - 1);
}

void	ft_error(void)
{
	ft_putstr_fd("ERROR\n", 2);
}

int		main(int argc, char const *argv[])
{
	int		*tab;
	int		tab_max;

	if (argc <= 1)
		tab = ft_get_standart();
	else if (argc == 2)
		tab_max = ft_get_len_file(argv[1]);
		tab = ft_get_file(argv[1], tab_max);
	if (tab == NULL)
	{
		ft_error();
		return (1);
	}
	ft_game(tab, tab_max);
	return (0);
}
