/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:35:17 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/29 10:51:33 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*retrn;
	int		i;
	int		j;

	i = 0;
	j = 0;
	retrn = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// 	return 0;
// }