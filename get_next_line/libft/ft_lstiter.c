/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 18:51:43 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 15:59:06 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!(lst))
		return ;
	while (lst->next)
	{
		f(lst);
		(lst) = (lst)->next;
	}
	if (lst->next == NULL)
		f(lst);
}
