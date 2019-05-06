/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   2_check_analyse.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 14:26:11 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/29 15:28:52 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	check_type(const char *format, t_stru stru)
{
	stru.type = format[0];
//	printf("\nsharp: %d\nzero: %d\nmoins: %d\nplus: %d\nesp: %d\ncount: %d\n", stru.sharp, stru.zero, stru.moins, stru.plus, stru.esp, stru.count);
//	printf("\nlarg: %d\nsize : %c\npreci : %d\nsize_preci: %d\ntype : %c\n\n", stru.larg, stru.size, stru.preci, stru.size_preci, stru.type);
//	exit(0);
	return (stru);
}

t_stru	check_size(const char *format, t_stru stru)
{
	if ((format[0] == 'h' && format[1] != 'h') ||
	(format[0] == 'l' && format[1] != 'l') || format[0] == 'L')
		stru.i++;
	if ((format[0] == 'h' && format[1] == 'h') ||
	(format[0] == 'l' && format[1] == 'l'))
		stru.i += 2;
	if (format[0] == 'L')
		stru.size = 'F';
	if (format[0] == 'h' && format[1] == 'h')
		stru.size = 'H';
	if (format[0] == 'h')
		stru.size = 'h';
	if (format[0] == 'l')
		stru.size = 'l';
	if (format[0] == 'l' && format[1] == 'l')
		stru.size = 'L';
	return (stru);
}

t_stru	check_preci(const char *format, t_stru stru)
{
	if (format[0] == '.')
	{
		stru.preci = 1;
		stru.i++;
		if (ft_isdigit(format[1]) == 1)
		{
			stru.size_preci = ft_atoi(format + 1);
			stru.i += ft_count_int(stru.size_preci);
		}
		else
			stru.size_preci = 0;
	}
	return (stru);
}

t_stru	check_opt(const char *format, t_stru stru)
{
	int		i;

	i = 0;
	if (ft_isdigit(format[i]) == 1 && format[i] != '0')
	{
		stru.larg = ft_atoi(format);
		stru.i += ft_count_int(stru.larg);
	}
	while (format[i] == '#' || format[i] == '0' || format[i] == '-' || format[i] == '+' || format[i] == ' ')
	{
		if (format[i] == '#')
			stru = ft_sharp(format + i, stru);
		if (format[i] == '0')
			stru = ft_zero(format + i, stru);
		if (format[i] == '-')
			stru = ft_moins(format + i, stru);
		if (format[i] == '+')
			stru = ft_plus(format + i, stru);
		if (format[i] == ' ')
			stru = ft_esp(format + i, stru);
		i++;
	}
	return (stru);
}
