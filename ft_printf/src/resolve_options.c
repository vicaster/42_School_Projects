/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   resolve_options.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 16:24:34 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/13 18:39:18 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_resolve_plus(t_stru stru, int nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE];

	i = 1;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	stru.buff[0] = '+';
	while (tmp[j])
		stru.buff[i++] = tmp[j++];
	stru.buff[i] = '\0';
	return (stru);
}

t_stru	ft_resolve_esp(t_stru stru, int nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE];

	i = 1;
	j = 0;
	ft_strcpy(tmp, stru.buff);
	stru.buff[0] = ' ';
	while (tmp[j])
		stru.buff[i++] = tmp[j++];
	stru.buff[i] = '\0';
	return (stru);
}

t_stru	ft_resolve_preci(t_stru stru, int nb)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE];

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
	else if (stru.count >= 0 && stru.type == 's')
	{
		ft_bzero(stru.buff, ft_strlen(stru.buff));
		while (stru.count-- > 0)
			stru.buff[i++] = tmp[j++];
	}
	stru.buff[i] = '\0';
	stru = ft_swap_plus(stru, nb);
	return (stru);
}
