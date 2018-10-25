/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 11:41:16 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 18:49:54 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	res = NULL;
	i = 0;
	if (!(res = (void*)malloc(1 + size * sizeof(char))))
		return (NULL);
	while (i <= size)
	{
		res[i] = '\0';
		i++;
	}
	res[i] = '\0';
	return (res);
}
