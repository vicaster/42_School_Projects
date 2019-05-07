/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   g_ft_count.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/04 14:36:44 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/07 18:33:00 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru		ft_countlarg(t_stru stru, long long nb)
{
	stru.count = stru.larg - ft_strlen(stru.buff);
	if (stru.type == 'x' || stru.type == 'X')
		stru.count = stru.larg - ft_strlen(stru.buff) - stru.esp;
	if (stru.plus == 1 && nb > 0 && stru.type != 'x' && stru.type != 'X' &&
    stru.type != 'p' && stru.type != 'd' && stru.type != 'i')
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - 1 - stru.esp;
	if (stru.type == 's' && stru.preci != 0)
		stru.count = stru.larg - stru.size_preci;
	if ((stru.type == 's' && stru.preci == 0) || (stru.type == 's' && stru.size_preci > nb))
		stru.count = stru.larg - ft_strlen(stru.buff);
	if (stru.type == 'p' || stru.type == 'o')
		stru.count = stru.larg - ft_strlen(stru.buff);
	return (stru);
}

t_stru		ft_countmoins(t_stru stru, long long nb)
{
	stru.count = stru.larg - ft_count_int(nb) - stru.esp;
	if (nb < 0)
	stru.count = stru.larg - ft_count_int(nb);
	if (stru.plus == 1 && nb > 0)
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - 1 - stru.esp;
	else if (stru.type == 'x' || stru.type == 'X')
		stru.count = stru.larg - ft_strlen(stru.buff);
	else if (stru.type == 's')
		stru.count = stru.larg - nb;
	else if (stru.type == 'o' || stru.type == 'p')
		stru.count = stru.larg - ft_strlen(stru.buff);
	else if ((stru.type == 'd' || stru.type == 'i') && stru.plus == 1)
		stru.count = stru.larg - ft_strlen(stru.buff);
	return (stru);
}

t_stru		ft_countzero(t_stru stru, long long nb)
{
	stru.count = stru.larg - ft_strlen(stru.buff);
	if (stru.plus == 1 && nb > 0 && (stru.type != 'x' || stru.type == 'X'))
		stru.count = stru.larg - ft_count_int(nb) - ft_count_zero(stru.buff) - 1;
	else if (stru.type == 'x' || stru.type == 'X')
		stru.count = stru.larg - ft_strlen(stru.buff) - stru.sharp - stru.sharp;
	else if (stru.type == 's')
		stru.count = stru.larg - ft_strlen(stru.buff);
	else if (stru.type == 'd' || stru.type == 'i')
		stru.count = stru.larg - ft_count_int(nb);
	if ((stru.type == 'd' || stru.type == 'i') && stru.zero == 1 && nb == 0 && stru.plus == 1)
		stru.count = stru.larg - ft_count_int(nb) - stru.plus;
	if ((stru.type == 'd' || stru.type == 'i') && stru.zero == 1 && nb >= 0 && stru.esp == 1)
		stru.count = stru.larg - ft_count_int(nb) - stru.esp;
	return (stru);
}

t_stru		ft_countpreci(t_stru stru, long long nb)
{
	stru.count = stru.size_preci - ft_count_int(nb);
	if ((stru.type == 'i' || stru.type == 'd') && nb < 0)
		stru.count = stru.size_preci - ft_count_int(nb) + 1;
	else if ((stru.type == 'i' || stru.type == 'd') && nb >= 0)
		stru.count = stru.size_preci - stru.larg - ft_count_int(nb);
	if (stru.type == 'x' || stru.type == 'X')
	{
		if (nb == 0 && stru.size_preci == 0)
			stru.buff[0] = '\0';
		stru.count = stru.size_preci - ft_strlen(stru.buff);
		if (nb < 0)
			stru.count = stru.size_preci - ft_strlen(stru.buff) - stru.preci;
	}
	else if (stru.type == 's')
		stru.count = stru.size_preci;
	else if (stru.type == 'o')
		stru.count = stru.size_preci - ft_strlen(stru.buff);
	return (stru);
}
