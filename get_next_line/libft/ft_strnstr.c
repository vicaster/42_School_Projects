/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 12:27:15 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:36:57 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return ((char*)haystack);
	}
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && i < n
				&& (i + j) < n)
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char*)haystack + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
