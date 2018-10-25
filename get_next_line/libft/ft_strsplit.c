/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 13:10:51 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:59:10 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbletter(const char *s, char c)
{
	size_t	i;
	size_t	letter;

	i = 0;
	letter = 0;
	while (s[i] && s[i] != c)
	{
		letter++;
		i++;
	}
	return (letter);
}

static size_t	ft_nbword(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	nbword;
	size_t	j;
	char	**res;

	i = 0;
	j = 0;
	if (!(s))
		return (NULL);
	nbword = ft_nbword(s, c);
	if (!(res = (malloc(sizeof(char*) * nbword + 1))))
		return (NULL);
	while (nbword > 0)
	{
		while (s[i] == c && s[i])
			i++;
		if (!(res[j] = ft_strsub(s, i, ft_nbletter(s + i, c))))
			return (NULL);
		j++;
		while (s[i] && s[i] != c)
			i++;
		nbword--;
	}
	res[j] = NULL;
	return (res);
}
