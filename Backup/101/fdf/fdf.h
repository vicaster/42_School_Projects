/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fdf.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: conrodri <conrodri@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/07 15:24:03 by conrodri     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/14 16:36:47 by vicaster    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct		s_ptr
{
		void		*mlx_ptr;
		void		*win_ptr;
		int			x;
		int			y;
		int			xmax;
		int			ymax;
}					t_ptr;


#endif
