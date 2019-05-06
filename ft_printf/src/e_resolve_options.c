/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   6_resolve_options.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 16:24:34 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/03 17:48:16 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_resolve_plus(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 1;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	if (nb >= 0)
	{
		stru.buff[0] = '+';
		while (tmp[j])
			stru.buff[i++] = tmp[j++];
		stru.buff[i] = '\0';
	}
	return (stru);
}

t_stru	ft_resolve_esp(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 1;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	if (stru.type != 'd' && stru.type != 'i')
	{
		stru.buff[0] = ' ';
		while (tmp[j])
			stru.buff[i++] = tmp[j++];
		stru.buff[i] = '\0';
	}
	else if ((stru.type == 'd' || stru.type == 'i') && nb >= 0)
	{
		stru.buff[0] = ' ';
		while (tmp[j])
			stru.buff[i++] = tmp[j++];
		stru.buff[i] = '\0';
	}
	return (stru);
}

t_stru	ft_resolve_preci_string(t_stru stru, long long nb)
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
		while (tmp[j])
			stru.buff[i++] = tmp[j++];
	}
	if (stru.count >= 0 && stru.type == 's')
		ft_bzero(stru.buff, ft_strlen(stru.buff));
	if (stru.count >= 0 && stru.type == 's')
		while (stru.count-- > 0)
			stru.buff[i++] = tmp[j++];
	stru.buff[i] = '\0';
	stru = ft_swap_plus(stru, nb);
	return (stru);
}

t_stru	ft_resolve_preci_int(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 0;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	stru = ft_countpreci(stru, nb);
	while (stru.count-- > 0)
		stru.buff[i++] = '0';
	if (stru.size_preci == 0 && nb == 0)
		tmp[0] = ' ';
	while (tmp[j])
		stru.buff[i++] = tmp[j++];
	if (nb < 0 && stru.size_preci - ft_count_int(nb) > 0)
		stru = ft_swap_char(stru, '-', '0');
	if (stru.plus == 1)
		stru = ft_swap_char(stru, '+', '0');
	if (stru.size_preci == 0 && stru.larg != 0 && nb == 0 && stru.plus == 0)
		stru = ft_replace(stru, '0', ' ');
	if (stru.size_preci == 0 && stru.larg != 0 && nb == 0 && stru.plus == 1)
		stru = ft_replace(stru, '0', '+');
	return (stru);
}

t_stru	ft_resolve_zero_int(t_stru stru, long long nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE_PRINTF];

	i = 0;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	stru = ft_countzero(stru, nb);
	while (stru.count-- > 0)
		stru.buff[j++] = '0';
	i = j;
	j = 0;
	while (tmp[j])
		stru.buff[i++] = tmp[j++];
	stru.buff[i] = '\0';
	if (nb < 0 && stru.count < 0)
		stru = ft_swap_char(stru, '0', '-');
	if ((stru.type == 'd' || stru.type == 'i') && stru.zero == 1 &&
	nb >= 0 && stru.plus == 1)
		stru = ft_swap_char(stru, '0', '+');
	if ((stru.type == 'd' || stru.type == 'i') && stru.zero == 1 &&
	nb >= 0 && stru.esp == 1 && (stru.larg - ft_count_int(nb) - stru.esp > 0))
		stru = ft_swap_char(stru, ' ', '0');
	return (stru);
}
