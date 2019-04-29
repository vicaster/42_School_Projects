/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   7_resolve_options2.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/09 15:20:13 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/29 18:30:24 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_resolve_larg(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 0;
	j = 0;
	if (stru.moins == 0)
	{
		ft_strcpy(tmp, stru.buff);
		stru = ft_countlarg(stru, nb);
		while (stru.count > 0)
		{
			stru.buff[j++] = ' ';
			stru.count--;
			i++;
		}
		j = 0;
		while (tmp[j])
			stru.buff[i++] = tmp[j++];
		stru.buff[i] = '\0';
	}
	return (stru);
}

t_stru	ft_resolve_zero(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 0;
	j = 0;

	ft_strcpy(tmp, stru.buff);
	stru = ft_countzero(stru, nb);
	while (stru.count-- > 0)
	{
		stru.buff[j++] = '0';
		i++;
	}
	j = 0;
	while (tmp[j])
		stru.buff[i++] = tmp[j++];
	stru.buff[i] = '\0';
	if (stru.zero == 1 && (stru.plus == 1 || (nb < 0 && (stru.type != 'x' && stru.type != 'X'))))
		stru = ft_swap_plus(stru, nb);
	return (stru);
}

t_stru	ft_resolve_moins(t_stru stru, long long nb)
{
	int		i;

	i = 0;
	stru = ft_countmoins(stru, nb);
	while (stru.buff[i])
		i++;
	while (stru.count > 0)
	{
		stru.buff[i++] = ' ';
		stru.count--;
	}
	stru.buff[i] = '\0';
	return (stru);
}

t_stru	ft_resolve_sharp(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 2;
	j = 0;
	if (nb != 0)
	{
		ft_strcpy(tmp, stru.buff);
		stru.buff[0] = '0';
		stru.buff[1] = 'x';
		while (tmp[j])
			stru.buff[i++] = tmp[j++];
		stru.buff[i] = '\0';
	}
	return (stru);
}

t_stru	ft_resolve_preci(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 0;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	stru = ft_countpreci(stru, nb);
	if (stru.count > 0 && stru.type != 's')
	{
		while (stru.count-- > 0)
			stru.buff[i++] = '0';
		if (nb < 0)
			stru.buff[i++] = '0';
	}
	while (tmp[j])
		stru.buff[i++] = tmp[j++];
	if (stru.count >= 0 && stru.type == 's')
	{
		ft_bzero(stru.buff, ft_strlen(stru.buff));
		while (stru.count-- > 0)
			stru.buff[i++] = tmp[j++];
	}
	stru.buff[i] = '\0';
	stru = ft_swap_plus(stru, nb);
	return (stru);
}
