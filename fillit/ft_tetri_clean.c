/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tetri_clean.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:06:05 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/17 18:23:26 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_tab_to_str(char **tab)
{
	int		l;
	int		c;
	int		i;
	char	*str;

	l = 0;
	i = 0;
	if (!(str = malloc(sizeof(char) * 10)))
		return (NULL);
	while (tab[l])
	{
		c = 0;
		while (tab[l][c])
		{
			if (tab[l][c] != '0')
				str[i++] = tab[l][c];
			c++;
		}
		l++;
	}
	str[i] = '\0';
	ft_free_tab(tab);
	return (str);
}

void	ft_put_0(char **tab)
{
	int	l;
	int	c;

	l = 0;
	c = 0;
	while (l < 4)
	{
		if ((ft_tetri_check_c(tab, c)) == 1)
			ft_tetri_set0c(tab, c);
		if ((ft_tetri_check_l(tab, l)) == 1)
			ft_tetri_set0l(tab, l);
		l++;
		c++;
	}
}

char	*ft_tetri_clean(char *buff)
{
	char	**tab;
	int		l;
	int		c;
	int		i;

	l = 0;
	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * 5)))
		return (NULL);
	while (l < 4)
	{
		c = 0;
		if (!(tab[l] = (char*)malloc(sizeof(char) * 6)))
			return (NULL);
		while (c < 5)
			tab[l][c++] = buff[i++];
		tab[l++][c] = '\0';
	}
	tab[4] = NULL;
	if (!(ft_check_tetri(tab)))
		return (0);
	ft_put_0(tab);
	return (ft_tab_to_str(tab));
}
