/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_revmemcpy.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 19:20:37 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 19:48:59 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_revmemcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char*)dest;
	tmp_src = (unsigned char*)src;
	while (n > 0)
	{
		n--;
		tmp_dst[n] = tmp_src[n];
	}
	return (dest);
}
