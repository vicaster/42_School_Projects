/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   c_resolve_printf.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 14:35:45 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/06 17:55:27 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	resolve_printf(t_stru stru, va_list lst)
{
	if (stru.type == '%')
		stru = ft_percent(stru);
	if ((stru.type == 'd' || stru.type == 'i') &&
	stru.size != 'l' && stru.size != 'L')
	{
		stru = ft_d_i(stru, lst);
		stru = ft_d_i_next(stru, lst);
	}
	if ((stru.type == 'd' || stru.type == 'i') &&
	(stru.size == 'l' || stru.size == 'L'))
		stru = ft_longlong(stru, lst);
	if (stru.type == 'o')
		stru = ft_octal(stru, lst);
	if (stru.type == 'x' || stru.type == 'X')
		stru = ft_hexa(stru, lst);
	if (stru.type == 'c')
		stru = ft_char(stru, lst);
	if (stru.type == 's')
		stru = ft_string(stru, lst);
	if (stru.type == 'p')
		stru = ft_pointer(stru, lst);
	return (stru);
}
