/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   m.c                                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 11:09:31 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 13:18:32 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
void	ft_putnbr(int nb);

//int		*ft_map(int *tab, int length, int (*f)(int));

//int		ft_foreach(int	*tab, int length, void (*f)(int));

int		ft_any(char **tab, int (*f)(char*));

int		is_9(char *a)
{
	if (a == 9)
		return (1);
	return (0);
}

int		main()
{
	int (*f)(char*);
	char tab[5][2] = {{'0', '1'}, {'9', 'd'}, 'b', '9', 'p'};
	int	length = 5;

	f = &is_9;
	printf("%d\n", ft_any(&tab, f));
	return (0);
}
