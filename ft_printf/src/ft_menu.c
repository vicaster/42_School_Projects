/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_menu.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 14:46:20 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/13 18:36:30 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_percent(t_stru stru, va_list lst)
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

t_stru	ft_d_i(t_stru stru, va_list lst)
{
	long long		nb;

	nb = va_arg(lst, int);
	ft_itoabuff_base(nb, 10, stru.buff);
	stru = ft_parse_ignore(stru);
	if (stru.plus == 1 && nb >= 0)
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
	return (stru);
}

t_stru	ft_hexa(t_stru stru, va_list lst)
{
	long long	nb;

	nb = va_arg(lst, long long);
	if (nb < 0)
		nb += 4294967296;
	ft_itoabuff_base(nb, 16, stru.buff);
	stru = ft_parse_ignore(stru);
	if (stru.preci == 1)
		stru = ft_resolve_preci(stru, nb);
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, nb);
	if (stru.sharp == 1)
		stru = ft_resolve_sharp(stru, nb);
	if (stru.larg != 0)
		stru = ft_resolve_larg(stru, nb);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, nb);
	if (stru.type == 'X')
		ft_strupcase(stru.buff);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}

t_stru	ft_octal(t_stru stru, va_list lst)
{
	long long	nb;

	nb = va_arg(lst, long long);
	ft_itoabuff_base(nb, 8, stru.buff);
	stru = ft_parse_ignore(stru);
	if (stru.plus == 1 && nb > 0)
		stru = ft_resolve_plus(stru, nb);
	if (stru.esp == 1 && stru.plus == 0 && nb > 0)
		stru = ft_resolve_esp(stru, nb);
	if (stru.preci == 1)
		stru = ft_resolve_preci(stru, nb);
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, nb);
	if (stru.larg != 0)
		stru = ft_resolve_larg(stru, nb);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, nb);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}

t_stru	ft_char(t_stru stru, va_list lst)
{
	int 	c;

	c = va_arg(lst, int);
	stru.buff[0] = c;
	stru = ft_parse_ignore(stru);
	if (stru.plus == 1)
		stru = ft_resolve_plus(stru, 1);
	if (stru.esp == 1 && stru.plus == 0)
		stru = ft_resolve_esp(stru, 1);
	if (stru.preci == 1)
		stru = ft_resolve_preci(stru, 1);
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, 1);
	if (stru.larg != 0)
		stru = ft_resolve_larg(stru, 1);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, 1);
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}
