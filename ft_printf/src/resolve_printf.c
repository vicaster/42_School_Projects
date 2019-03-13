/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   resolve_printf.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 14:35:45 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/08 17:14:27 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	resolve_printf(t_stru stru, va_list lst)
{
	if (stru.type == '%')
		ft_percent(stru, lst);
	if ((stru.type == 'd' || stru.type == 'i') && stru.size != 'l' && stru.size != 'L')
		ft_d_i(stru, lst);
	if ((stru.type == 'd' || stru.type == 'i') && (stru.size == 'l' || stru.size== 'L'))
		ft_longlong(stru, lst);
	if (stru.type == 'o')
		ft_octal(stru, lst);
	if (stru.type == 'x' || stru.type == 'X')
		ft_hexa(stru, lst);
	if (stru.type == 'c')
		ft_char(stru, lst);
	if (stru.type == 's')
		ft_string(stru, lst);
	return (stru);
}
