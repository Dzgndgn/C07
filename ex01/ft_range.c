/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:59:04 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/18 13:22:05 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	ptr = (int *) malloc((max - min) * (4));
	i = 0;
	if (min >= max)
		return (NULL);
	if (!ptr)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
