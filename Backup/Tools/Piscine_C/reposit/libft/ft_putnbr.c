/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vicaster <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 09:33:57 by vicaster     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 09:34:13 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_overflow(int nb)
{
	ft_putchar('-');
	ft_putchar('2');
	nb = 147483648;
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putnbr(ft_overflow(nb));
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		if (nb > 0 && nb <= 9)
			ft_putchar(nb + '0');
		if (nb == 0)
			ft_putchar('0');
	}
}
