/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:17:27 by lonulli           #+#    #+#             */
/*   Updated: 2024/07/29 14:17:29 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	range;
	int	*numarray;

	j = 0;
	if (min > max)
		return (NULL);
	range = max - min;
	numarray = (int *) malloc (sizeof (int) * (range));
	if (numarray == NULL)
		return (NULL);
	while (min < max)
		numarray[j++] = min++;
	return (numarray);
}
