/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   game.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vic <vic@student.le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/02 18:31:46 by vic          #+#   ##    ##    #+#       */
/*   Updated: 2018/12/02 18:32:06 by vic         ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "alum.h"

void		ft_display_board(int *tab, int max)
{
	int i;
	int j;

	i = 0;
	while (i <= max)
	{
		j = 0;
		while (j < tab[i])
		{
			ft_putchar('-');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int			ia_turn(int *tab, int max)
{
	ft_putendl("IA turn");
	if ((tab[max]) % 4 == 0)
		return (1);
	if ((tab[max] + 1) % 4 == 0)
		return (2);
	if ((tab[max] + 2) % 4 == 0)
		return (3);
	return (1);
}

int			player_turn(int *tab, int max)
{
	char	buf[2];
	int		nb;

	ft_putendl("Player turn");
	while (1)
	{
		ft_putstr("combien de allumete a enlever ?\n:");
		if (read(0, &buf, 2) < 0 || buf[0] < '0' || buf[0] > '3' ||
			buf[0] - '0' > tab[max])
			ft_putendl("Erreur, mauvais nombre");
		else
			break;
	}
	return (buf[0] - '0');
}

void		ft_game(int *tab, int tab_max)
{
	int		nb_turn;
	int		nb;

	nb_turn = 0;
	while (1)
	{
		ft_putendl("le tableau");
		ft_display_board(tab, tab_max);
		if (nb_turn % 2 == 0)
			nb = player_turn(tab, tab_max);
		else
		{
			nb = ia_turn(tab, tab_max);
			printf("IA choose %d\n", nb);
		}
		tab[tab_max] -= nb;
		if (tab[tab_max] == 0)
			tab_max--;
		if (tab_max == -1)
			break;
		nb_turn++;
	}
	if (nb_turn % 2 == 0)
		ft_putendl("l'IA a gagne");
	else
		ft_putendl("le joueur a gagne");
}
