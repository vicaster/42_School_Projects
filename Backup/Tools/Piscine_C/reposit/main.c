/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 21:47:19 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 20:12:37 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int		min = -200;
	int		max = -200;
	int		diff = max - min;
	int		i = 0;
	int 	**range = NULL;
	min  = ft_ultimate_range(range, min, max);

	while (i < diff)
	{
		printf("%d\n", min);
		i++;
	}
}
