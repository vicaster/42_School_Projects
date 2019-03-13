/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/04 14:36:44 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/13 18:38:35 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru		ft_countlarg(t_stru stru, long long nb)
{
	if (stru.type == 'x' || stru.type == 'X')
		stru.count = stru.larg - ft_strlen(stru.buff) - stru.esp;
	else
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - stru.esp;
	if (stru.plus == 1 && nb > 0 && stru.type != 'x' && stru.type != 'X')
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - 1 - stru.esp;
	if (stru.type == 's' && stru.preci != 0)
		stru.count = stru.larg - stru.size_preci;
	if ((stru.type == 's' && stru.preci == 0) || (stru.type == 's' && stru.size_preci > nb))
		stru.count = stru.larg - nb;
	return (stru);
}

t_stru		ft_countmoins(t_stru stru, long long nb)
{
	stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - stru.esp;
	if (stru.plus == 1 && nb > 0)
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - 1 - stru.esp;
	else if (stru.type == 'x' || stru.type == 'X')
		stru.count = stru.larg - ft_strlen(stru.buff);
	if (stru.type == 's')
		stru.count = stru.larg - nb;
	return (stru);
}

t_stru		ft_countzero(t_stru stru, long long nb)
{
	if (stru.plus == 1 && nb > 0 && (stru.type != 'x' || stru.type == 'X'))
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - 1;
	else if (stru.type == 'x' || stru.type == 'X')
		stru.count = stru.larg - ft_strlen(stru.buff) - stru.sharp - stru.sharp;
	else
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff);
	if (stru.type == 's')
		stru.count = stru.larg - ft_strlen(stru.buff);
	return (stru);
}

t_stru		ft_countpreci(t_stru stru, long long nb)
{
	if (stru.type == 'x' || stru.type == 'X')
	{
		if (nb == 0 && stru.size_preci == 0)
			stru.buff[0] = '\0';
		stru.count = stru.size_preci - ft_count_int(nb);
		if (nb < 0)
			stru.count = stru.size_preci - ft_strlen(stru.buff) - stru.preci;
	}
	else
		stru.count = stru.size_preci - ft_count_int(nb);
	if (stru.type == 's')
		stru.count = stru.size_preci;
	if ((stru.type == 'i' || stru.type == 'd') && (stru.size == 'l' || stru.size == 'L'))
		stru.count = stru.size_preci - ft_strlen(stru.buff) + 1;
	return (stru);
}
