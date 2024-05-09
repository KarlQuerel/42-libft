/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karl <karl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:04:14 by kquerel           #+#    #+#             */
/*   Updated: 2024/05/09 11:17:49 by karl             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_ret;

	if (dst == NULL)
		i = 0;
	else
		i = ft_strlen(dst);
	j = ft_strlen(src);
	size_ret = i + j;
	if (size == 0 || i > size)
		return (size + j);
	j = 0;
	while (src[j] && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (size_ret);
}

