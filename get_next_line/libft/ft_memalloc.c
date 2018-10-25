/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 19:33:01 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 19:43:01 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*res;
	int				i;

	res = NULL;
	i = 0;
	if (!(res = (void*)malloc(size * sizeof(*res))))
		return (NULL);
	while (size--)
	{
		res[i] = 0;
		i++;
	}
	return ((void*)res);
}
