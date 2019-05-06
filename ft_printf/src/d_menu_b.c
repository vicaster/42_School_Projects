/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   d_b_menu.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/01 17:11:49 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/06 17:56:20 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru		ft_string(t_stru stru, va_list lst)
{
	char	*str;
	int		nb;

	str = va_arg(lst, char*);
	if (str == NULL)
		nb = 6;
	else
		nb = ft_strlen(str);
	if (str == NULL)
		stru = ft_buff_null(stru);
	else
		ft_strcpy(stru.buff, str);
	stru = ft_parse_ignore(stru);
	if (stru.esp == 1 && stru.plus == 0)
		stru = ft_resolve_esp(stru, nb);
	if (stru.preci == 1)
		stru = ft_resolve_preci_string(stru, nb);
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, nb);
	if (stru.larg != 0 && stru.zero == 0)
		stru = ft_resolve_larg(stru, nb);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, nb);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}

t_stru	ft_pointer(t_stru stru, va_list lst)
{
	int					i;
	int					j;
	unsigned long		nb;
	char				tmp[BUFF_SIZE_PRINTF];

	i = 0;
	j = 2;
	stru = ft_parse_ignore(stru);
	stru.buff[0] = '0';
	stru.buff[1] = 'x';
	nb = va_arg(lst, unsigned long);
	ft_itoabuff_base_uli(nb, 16, tmp);
	if (nb == 0 && stru.preci == 0)
		ft_bzero(tmp, BUFF_SIZE_PRINTF);
	if (nb == 0 && stru.preci == 0)
		stru.buff[2] = '0';
	while (tmp[i])
		stru.buff[j++] = tmp[i++];
	if (stru.preci == 1 && stru.size_preci != 0)
		stru = ft_resolve_preci_string(stru, nb);
	if (stru.larg != 0 && stru.zero == 0)
		stru = ft_resolve_larg(stru, (long long)nb);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, nb);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}

t_stru	ft_unsigned(t_stru stru, va_list lst)
{
	unsigned long long	nb;

	nb = va_arg(lst, unsigned long long);
	ft_itoabuff_base(nb, 10, stru.buff);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}

t_stru	ft_longlong(t_stru stru, va_list lst)
{
	unsigned long long		nb;

	nb = va_arg(lst, unsigned long long);
	ft_itoabuff_base(nb, 10, stru.buff);
	stru = ft_parse_ignore(stru);
	printf("pas encore fait!");
/*	if (stru.plus == 1 && nb >= 0)
		stru = ft_resolve_plus(stru, nb);
	if (stru.preci == 1)
		stru = ft_resolve_preci(stru, nb);
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, nb);
	if (stru.larg != 0)
		stru = ft_resolve_larg(stru, nb);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, nb);
	if (stru.esp == 1 && stru.plus == 0 && nb >= 0)
		stru = ft_resolve_esp(stru, nb);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
*/	return (stru);
}

t_stru	ft_percent(t_stru stru)
{
	stru = ft_parse_ignore(stru);
	stru.buff[0] = '%';
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, 0);
	if (stru.larg != 0)
		stru = ft_resolve_larg(stru, 0);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, 0);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}
