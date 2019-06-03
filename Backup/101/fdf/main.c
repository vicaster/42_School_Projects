/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/03 19:32:25 by conrodri     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/14 16:40:44 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "mlx.h"
#include "fdf.h"
#include "mlx_int.h"
#include <unistd.h>

t_ptr		*initstruct(t_ptr *ptr)
{
	ptr = malloc(sizeof(t_ptr));
	
	ptr->mlx_ptr = mlx_init();
	ptr->win_ptr = mlx_new_window(ptr->mlx_ptr, 100, 100, "fdf");
	ptr->x = 0;
	ptr->y = 0;
	ptr->xmax = 0;
	return (ptr);
}

int		line_put(t_ptr *ptr)
{

	while (ptr->x < ptr->xmax)
	{
		mlx_pixel_put(ptr->mlx_ptr, ptr->win_ptr, ptr->x, ptr->y, 0xFFFFFF);
		ptr->x++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		deal_key(int key, void *param)
{
	ft_putchar('X');
	return (0);
}

int		main()
{
	t_ptr	*ptr;

	ptr = initstruct(ptr);
	line_put(ptr->x, ptr);
	mlx_key_hook(ptr->win_ptr, deal_key, (void*)0); 
	mlx_loop(ptr->mlx_ptr);
}
