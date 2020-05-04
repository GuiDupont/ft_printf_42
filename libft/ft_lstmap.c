/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdp <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 20:20:40 by gdp               #+#    #+#             */
/*   Updated: 2020/03/18 20:20:43 by gdp              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final;
	t_list	*temp;

	(void)(*del);
	if (!(lst))
		return (NULL);
	if (!(final = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
			return (NULL);
		ft_lstadd_back(&final, temp);
		lst = lst->next;
	}
	return (final);
}
