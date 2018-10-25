/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcspn.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/19 22:51:42 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 13:24:52 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i])
	{
		while (s2[j] && s1[i] != s2[j])
			j++;
		if (s2[j] == s1[i])
			return (i);
		j = 0;
		i++;
	}
	return (i);
}
