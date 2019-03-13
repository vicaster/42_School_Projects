/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tools.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/23 18:27:22 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/11 15:35:20 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_stru	ft_init_stru(t_stru stru)
{
	stru.sharp = 0;
	stru.zero = 0;
	stru.moins = 0;
	stru.plus = 0;
	stru.esp = 0;
	stru.larg = 0;
	stru.preci = 0;
	stru.size = 0;
	stru.size_preci = 0;
	return (stru);
}

void	ft_add_beggin(t_stru stru)
{
	int		i;
	int		j;
	char	tmp[BUFF_SIZE];

	i = 0;
	j = 0;
	while (stru.buff[i] && (stru.buff[i] != '+' || stru.buff[i] != '-'))
		i++;
	if (stru.buff[i] == '-' || stru.buff[i] == '+')
	{
		tmp[j++] = stru.buff[i];
		i = 0;
		while (tmp[j] && stru.buff[i] == '0')
			tmp[j++] = stru.buff[i++];
		i++;
		while (stru.buff[i])
			tmp[j++] = stru.buff[i++];
			i = 0;
		while (tmp[i++])
			stru.buff[i] = tmp[i];
	}
}

void	ft_itoabuff_base(long long n, int base, char *str)
{
	int				i;
	int				digit;
	long long		nb;

	i = 0;
	nb = n < 0 ? -n : n;
	while (nb)
	{
		digit = nb % base;
		str[i++] = (digit > 9) ? (digit - 10) + 'a' : digit + '0';
		nb /= base;
	}
	if (n < 0 && base == 10)
		str[i++] = '-';
	else if (n == 0)
		str[i++] = '0';
	str[i] = '\0';
	ft_strrev(str);
}

t_stru	ft_swap_plus(t_stru stru, int nb)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	if (stru.plus == 1 || (nb < 0 && stru.preci == 0))
	{
		while (stru.buff[i] != '+' && stru.buff[i] != '-')
			i++;
		c = stru.buff[i];
		stru.buff[i] = stru.buff[j];
		stru.buff[j] = c;
	}
	return (stru);
}
