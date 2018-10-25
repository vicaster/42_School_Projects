/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 18:44:12 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 17:45:14 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return ((char*)haystack);
	}
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j])
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
