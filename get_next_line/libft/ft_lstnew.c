/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 11:13:15 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 18:47:22 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lstnew;

	lstnew = NULL;
	if (!(lstnew = (t_list*)malloc(sizeof(t_list)))
				|| !(lstnew->content = ft_memalloc(content_size)))
		return (NULL);
	if (content == NULL)
	{
		lstnew->content_size = 0;
		lstnew->content = NULL;
		lstnew->next = NULL;
		return (lstnew);
	}
	lstnew->content = ft_memcpy(lstnew->content, content, content_size);
	lstnew->content_size = content_size;
	lstnew->next = NULL;
	return (lstnew);
}
