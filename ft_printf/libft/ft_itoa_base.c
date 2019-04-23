/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/08 19:10:11 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/08 19:13:05 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long int n, int base)
{
	int					i;
	int					digit;
	unsigned long long	nb;
	char				*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * (ft_count_int(n) + 1))))
		return (NULL);
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
	return (ft_strrev(str));
}
