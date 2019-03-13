/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   options.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/23 12:02:17 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/01 16:25:57 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_zero(const char *restrict format, t_stru stru)
{
	stru.zero = 1;
	stru.i++;
	if (ft_isdigit(format[1]) == 1)
	{
		stru.larg = ft_atoi(format);
		stru.i += ft_count_int(stru.larg);
	}
	return (stru);
}

t_stru	ft_esp(const char *restrict format, t_stru stru)
{
	stru.esp = 1;
	stru.i++;
	if (ft_isdigit(format[1]) == 1 && format[1] != '0')
	{
		stru.larg = ft_atoi(format);
		stru.i += ft_count_int(stru.larg);
	}
	return (stru);
}

t_stru	ft_plus(const char *restrict format, t_stru stru)
{
	stru.plus = 1;
	stru.i++;
	if (ft_isdigit(format[1]) == 1 && format[1] != '0')
	{
		stru.larg = ft_atoi(format);
		stru.i += ft_count_int(stru.larg);
	}
	return (stru);
}

t_stru	ft_moins(const char *restrict format, t_stru stru)
{
	stru.moins = 1;
	stru.i++;
	if (ft_isdigit(format[1]) == 1 && format[1] != '0')
	{
		stru.larg = ft_atoi(format + 1);
		stru.i += ft_count_int(stru.larg);
	}
	return (stru);
}

t_stru	ft_sharp(const char *restrict format, t_stru stru)
{
	stru.sharp = 1;
	stru.i++;
	if (ft_isdigit(format[1]) == 1 && format[1] != '0')
	{
		stru.larg = ft_atoi(format + 1);
		stru.i += ft_count_int(stru.larg);
	}
	return (stru);
}
