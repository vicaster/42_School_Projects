/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yalabidi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 09:29:34 by yalabidi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 21:55:16 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_thicc(int t)
{
	int thicc;

	thicc = t - 2;
	ft_putchar('o');
	while (thicc > 0)
	{
		ft_putchar('-');
		thicc--;
	}
	if (thicc == -1)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('o');
	ft_putchar('\n');
	return (0);
}

void	ft_height(int t, int h)
{
	int height;
	int thicc;

	height = h - 2;
	while (height > 0)
	{
		thicc = t - 2;
		if (t != 1)
		{
			ft_putchar('|');
			while (thicc > 0)
			{
				ft_putchar(' ');
				thicc--;
			}
		}
		if (h != 1)
			ft_putchar('|');
		ft_putchar('\n');
		height--;
	}
}

int		rush00(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return (0);
	}
	ft_thicc(x);
	ft_height(x, y);
	if (y != 1)
		ft_thicc(x);
	return (0);
}
