/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:17:35 by lonulli           #+#    #+#             */
/*   Updated: 2024/07/29 14:17:36 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range2;
	int	*numarray;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
		range2 = max - min;
	*range = &range2;
	numarray = (int *) malloc (sizeof (int) * (range2));
	if (numarray == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = -1;
	while (min < max)
		numarray[++i] = min++;
	return (range2);
}
