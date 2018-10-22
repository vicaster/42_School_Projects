/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcendup.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/22 20:26:34 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 20:30:04 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcendup(const char *s1, size_t c)
{
	char	*dest;
	int		size;
    int     i;

	dest = NULL;
	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	size = 0;
    i = 0;
	while (s1[size] && s1[size] != c)
		size++;
    if (s1[size] == c)
        size++;
        while (s1[size])
        {
            dest[i] = s1[size];
            i++;
            size++;
        }
	dest[size] = '\0';
	return (dest);
}
