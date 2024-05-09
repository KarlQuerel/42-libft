/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karl <karl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:43:29 by kquerel           #+#    #+#             */
/*   Updated: 2024/05/09 11:44:02 by karl             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	int		size;

	sdup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (sdup == NULL)
		return (NULL);
	size = 0;
	while (s[size])
	{
		sdup[size] = s[size];
		size++;
	}
	sdup[size] = '\0';
	return (sdup);
}

