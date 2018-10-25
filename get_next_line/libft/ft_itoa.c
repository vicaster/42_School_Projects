/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   itoa.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 13:34:13 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:55:12 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				i;
	char			*res;
	unsigned int	j;
	int				signe;

	signe = 1;
	j = 0;
	i = 0;
	if (!(res = malloc(sizeof(char) * (ft_lenint(n) + 1))))
		return (NULL);
	j = (n < 0 ? -n : n);
	if (n < 0)
		signe = -1;
	if (n == 0)
		res[i] = 48;
	while (j)
	{
		res[i] = (j % 10) + 48;
		j = j / 10;
		i++;
	}
	if (signe == -1)
		res[i] = '-';
	res[ft_lenint(n) + 1] = '\0';
	return (ft_strrev(res));
}
