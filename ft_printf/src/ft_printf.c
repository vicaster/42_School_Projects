/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/21 15:05:14 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/07 13:37:36 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
************* Fonction main ft_printf *************
*/

int		ft_printf(const char *restrict format, ...)
{
	t_stru		stru;
	va_list		lst;

	stru = ft_init_stru(stru);
	va_start(lst, format);
	stru.i = 0;
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
			stru.ret += ft_strlen(stru.buff);
		}
		else if (format[stru.i] != '%')
		{
			ft_putchar(format[stru.i]);
		}
		stru.i++;
	}
	va_end(lst);
//	ft_putchar('\n');
//	printf("\nretfinal: |%i|\n", stru.ret);
	return (0);
}
