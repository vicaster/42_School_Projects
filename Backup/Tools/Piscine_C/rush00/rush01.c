/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yalabidi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 09:29:34 by yalabidi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 21:55:54 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_endthicc01(int x)
{
	int thicc;

	thicc = x - 2;
	ft_putchar('\\');
	while (thicc > 0)
	{
		ft_putchar('*');
		thicc--;
	}
	if (thicc == -1)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('/');
	ft_putchar('\n');
	return (0);
}

int		ft_thicc01(int x)
{
	int thicc;

	thicc = x - 2;
	ft_putchar('/');
	while (thicc > 0)
	{
		ft_putchar('*');
		thicc--;
	}
	if (x == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (0);
}

void	ft_height01(int x, int y)
{
	int height;
	int thicc;

	height = y - 2;
	while (height > 0)
	{
		thicc = x - 2;
		if (x != 1)
		{
			ft_putchar('*');
			while (thicc > 0)
			{
				ft_putchar(' ');
				thicc--;
			}
		}
		if (y != 1)
			ft_putchar('*');
		ft_putchar('\n');
		height--;
	}
}

int		rush01(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
		return (0);
	}
	ft_thicc01(x);
	ft_height01(x, y);
	if (y != 1)
		ft_endthicc01(x);
	return (0);
}
