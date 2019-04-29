/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tools3.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/12 15:40:14 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/29 18:51:38 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru		ft_swap_char(t_stru stru, char a, char b)
{
	int		tmp_a;
	int		tmp_b;
	int		i;

	i = 0;
	while (stru.buff[i++])
	{
		if (stru.buff[i] == a)
			tmp_a = 1;
		if (stru.buff[i] == b)
			tmp_b = 1;
	}
	if (tmp_a != 1 || tmp_b != 1)
		return (stru);
	i = 0;
	while (stru.buff[i] && stru.buff[i] != a)
		i++;
	tmp_a = i;
	i = 0;
	while (stru.buff[i] && stru.buff[i] != b)
		i++;
	tmp_b = i;
	stru.buff[tmp_a] = b;
	stru.buff[tmp_b] = a;
	return (stru);
}

t_stru		ft_check_end(t_stru stru)
{
	int		i;

	i = 0;
	while (stru.buff[i])
		i++;
	i--;
	if (stru.buff[i] == '-')
	{
		stru.buff[i] = '\0';
		i--;
		while (ft_isdigit(stru.buff[i]) == 1)
			i--;
		if (stru.buff[i] == ' ')
			stru.buff[i] = '-';
	}
	return (stru);
}
