/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printftest.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/21 14:53:24 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/04 15:04:34 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		i;

	if (ac != 3)
		return (0);
	i = atoi(av[2]);
	printf("printf: |");
	printf(av[1], i);
	printf("|");
	return (0);
}
