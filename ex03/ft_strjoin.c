/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:24:19 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/18 11:27:04 by ddogan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*ptr;
	int		a;

	i = 0;
	j = 0;
	a = 0;
	ptr = (char *) malloc (sizeof (strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ptr[a++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			ptr[a++] = sep[j++];
		i++;
	}
	ptr[a] = '\0';
	return (ptr);
}
