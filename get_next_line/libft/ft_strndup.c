/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 18:54:41 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 19:05:30 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		i++;
	}
	if ((dest = (char *)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
