/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   a_ft_printf.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/21 15:05:14 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/07 19:12:48 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
************* Fonction main ft_printf *************
*/

int		ft_printf(const char *format, ...)
{
	t_stru		stru;
	va_list		lst;

	stru = (t_stru){0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	va_start(lst, format);
	while (format[stru.i])
	{
		if (format[stru.i] == '%')
		{
			stru.i++;
			stru = ft_init_stru(stru);
			stru = check_opt(format + stru.i, stru);
			stru = check_preci(format + stru.i, stru);
			stru = check_size(format + stru.i, stru);
			stru = check_type(format + stru.i, stru);
			stru = resolve_printf(stru, lst);
		}
		else if (format[stru.i] != '%')
		{
			ft_putchar(format[stru.i]);
			stru.ret += 1;
		}
		stru.i++;
	}
	va_end(lst);
	return (stru.ret);
}
