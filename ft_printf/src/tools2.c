/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tools2.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 17:56:55 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/06 18:29:49 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_add_begin(t_stru stru, char c)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE];

	i = 0;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	stru.buff[i++] = c;
	while (tmp[j])
		stru.buff[i++] = tmp[j++];
	return (stru);
}

int		ft_count_zero(char *str)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] == '0')
			nb++;
		i++;
	}
	return (nb);
}

t_stru	ft_parse_ignore(t_stru stru)
{
	if (stru.zero == 1 && stru.moins == 1)
		stru.zero = 0;
	if (stru.zero  == 1 && stru.preci == 1 &&
	(stru.type == 'd' || stru.type == 'i' || stru.type == 'o'
	|| stru.type == 'u' || stru.type == 'x' || stru.type == 'X'))
		stru.zero = 0;
	if (stru.esp == 1 && stru.plus == 1)
		stru.esp = 0;
	if (stru.sharp && (stru.type == 'd' || stru.type == 'i' || stru.type == 'u' || stru.type == 'c' || stru.type == 's'))
		stru.sharp = 0;
	return (stru);
}

t_stru	ft_buff_null(t_stru stru)
{
	stru.buff[0] = '(';
	stru.buff[1] = 'n';
	stru.buff[2] = 'u';
	stru.buff[3] = 'l';
	stru.buff[4] = 'l';
	stru.buff[5] = ')';
	stru.buff[6] = '\0';
	return (stru);
}
