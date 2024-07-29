/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:17:41 by lonulli           #+#    #+#             */
/*   Updated: 2024/07/29 14:17:47 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_lenght(char **strs, int size, char *sep)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		if (i < size - 1)
			lenght += ft_strlen(sep);
		i++;
	}
	return (lenght + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concstring;
	int		i;
	int		total_lenght;

	if (size == 0)
	{
		concstring = malloc(sizeof (char));
		*concstring = 0;
		return (concstring);
	}
	concstring = (char *) malloc (sizeof (char) * ft_lenght(strs, size, sep));
	if (concstring == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		concstring = ft_strcat(concstring, strs[i]);
		if (i < size - 1)
			concstring = ft_strcat(concstring, sep);
	}
	return (concstring);
}
