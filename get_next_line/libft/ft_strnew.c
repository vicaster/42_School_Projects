/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 23:21:48 by vicaster     #+#   ##    ##    #+#       */
<<<<<<< HEAD
/*   Updated: 2018/10/31 12:21:37 by vicaster    ###    #+. /#+    ###.fr     */
=======
/*   Updated: 2018/10/30 19:26:50 by vicaster    ###    #+. /#+    ###.fr     */
>>>>>>> 16443d7b47f6c9ecb1d027acf653239a95a82f73
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = malloc(sizeof(*str) * size + 1)))
		return (NULL);
	ft_memset(str, 0, size + 1);
	return (str);
<<<<<<< HEAD
}
=======
}
>>>>>>> 16443d7b47f6c9ecb1d027acf653239a95a82f73
