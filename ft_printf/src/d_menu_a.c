/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   d_menu_a.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 14:46:20 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/06 18:24:32 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_d_i(t_stru stru, va_list lst)
{
	int		nb;

	nb = va_arg(lst, int);
	ft_itoabuff_base(nb, 10, stru.buff);
	stru = ft_parse_ignore(stru);
	if (stru.preci == 1)
		stru = ft_resolve_preci_int(stru, nb);
	if (stru.plus == 1)
		stru = ft_resolve_plus(stru, nb);
	if (stru.esp == 1)
		stru = ft_resolve_esp(stru, nb);
	if (stru.larg != 0 && stru.zero == 0)
		stru = ft_resolve_larg(stru, nb);
	if (stru.moins == 1)
		stru = ft_resolve_moins(stru, nb);
	if (stru.zero == 1 && stru.larg >= ft_strlen(stru.buff))
		stru = ft_resolve_zero_int(stru, nb);
	if (stru.preci == 1 && stru.size_preci == 0 && nb == 0 && stru.larg == 0)
		stru.buff[0] = '\0';
	return (stru);
}

t_stru	ft_d_i_next(t_stru stru, va_list lst)
{
//	if (stru.preci == 1 && stru.plus == 1)
//		stru = ft_resolve_preci_int_plus();
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}

t_stru	ft_hexa(t_stru stru, va_list lst)
{
	long long	nb;

	nb = va_arg(lst, long long);
	ft_itoabuff_base(nb, 16, stru.buff);
	stru = ft_parse_ignore(stru);
	if (stru.preci == 1)
		stru = ft_resolve_preci(stru, nb);
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, nb);
	if (stru.sharp == 1)
		stru = ft_resolve_sharp(stru, nb);
	if (stru.preci == 1 && stru.size_preci == 0 && nb == 0)
		stru.buff[0] = '\0';
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
	if (nb == 0 && stru.preci == 1)
		ft_bzero(stru.buff, BUFF_SIZE_PRINTF);
	stru = ft_parse_ignore(stru);
	if (stru.sharp == 1)
		stru = ft_add_first(stru, '0');
	if (stru.esp == 1 && stru.plus == 0 && nb > 0)
		stru = ft_resolve_esp(stru, nb);
	if (stru.preci == 1 && stru.size_preci != 0)
		stru = ft_resolve_preci(stru, nb);
	if (stru.zero == 1)
		stru = ft_resolve_zero(stru, nb);
	if (stru.larg != 0)
		stru = ft_resolve_larg(stru, nb);
	if (stru.moins == 1 && stru.larg > 0)
		stru = ft_resolve_moins(stru, nb);
	if (stru.sharp == 1 && stru.preci == 0 && nb == 0)
		stru.buff[1] = '\0';
	stru.ret += ft_strlen(stru.buff);
	ft_putstr(stru.buff);
	return (stru);
}

t_stru	ft_char(t_stru stru, va_list lst)
{
	int	c;

	c = va_arg(lst, int);
	stru.buff[0] = c;
	if (c == 0)
		stru.ret += 1;
	if (c == 0 && stru.moins == 1)
		ft_putchar('\0');
	stru = ft_parse_ignore(stru);
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
	if (c == 0 && stru.moins == 0)
		ft_putchar('\0');
	return (stru);
}
