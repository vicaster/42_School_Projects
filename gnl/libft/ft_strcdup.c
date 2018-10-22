/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/22 20:23:04 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 20:24:24 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s1, size_t c)
{
	char	*dest;
	int		size;

	dest = NULL;
	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	size = 0;
	while (s1[size] && s1[size] != c)
	{
		dest[size] = s1[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
