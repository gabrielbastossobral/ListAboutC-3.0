/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:30:00 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/29 11:57:54 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (destlen >= size)
	{
		return (size + srclen);
	}
	while ((destlen + i) < (size -1) && i < srclen)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// int main(void)
// {
// 	char	dest[4] = "Ola";
// 	char	src[6] = "mundo";
// 	unsigned int	size = 2;
// 	int result = ft_strlcat(dest, src, size);
// 	printf("%s\n", dest);
// 	printf("%i\n", result);
// 	return 0;
// }