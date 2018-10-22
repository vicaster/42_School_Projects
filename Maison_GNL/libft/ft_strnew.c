/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 23:21:48 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 15:01:23 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fraiche;
	size_t	i;

	i = 0;
	if (!(fraiche = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		fraiche[i] = '\0';
		i++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}
