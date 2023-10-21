/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:54:36 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/18 13:07:26 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;
	int		a;

	i = 0;
	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	ptr = (char *) malloc (a + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
