/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karl <karl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:24:43 by kquerel           #+#    #+#             */
/*   Updated: 2024/05/09 11:44:02 by karl             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*var_list;

	var_list = malloc(sizeof(t_list));
	if (var_list == NULL)
		return (NULL);
	var_list->content = content;
	var_list->next = NULL;
	return (var_list);
}
