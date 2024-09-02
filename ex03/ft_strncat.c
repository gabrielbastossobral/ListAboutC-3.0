/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:58:30 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/29 10:54:03 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*retrn;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	retrn = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (retrn);
}

// int main(void)
// {
// 	char dest[50] = "Olá, ";
//     char *src = "mundo!";
// 	unsigned 	i = 2;
// 	ft_strncat(dest, src, i);
// 	printf("%s", dest);
// 	return 0;
// }