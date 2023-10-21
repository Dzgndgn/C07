/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:02:22 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/17 21:23:33 by ddogan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;
	int	sinir;

	sinir = max - min;
	ptr = (int *) malloc((max - min) * 4);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (ptr == NULL)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	*range = ptr;
	while (i < sinir)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (sinir);
}
