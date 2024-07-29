/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonulli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:51:57 by lonulli           #+#    #+#             */
/*   Updated: 2024/07/24 11:11:17 by lonulli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof (char) * (i));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	char *string = ft_strdup(av[1]);
	printf("Indirizzo stringa copiata %p\n",&string);
	printf("Indirizzo prima stringa %p\n", &av[1]);
}*/
