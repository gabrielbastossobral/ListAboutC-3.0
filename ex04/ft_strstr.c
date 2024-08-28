/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:29:02 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/28 11:34:19 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*source;
	char	*search;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		source = str;
		search = to_find;
		while (*search && *source == *search)
		{
			source++;
			search++;
		}
		if (!*search)
		{
			return (str);
		}
		str++;
	}

	return (NULL);
}

// int main() {
// 	char *source = "Hello, world!";
// 	char *search = "lw";   
//     char *result = ft_strstr(source, search);
//     if (result) {
//         printf("Achou '%s' na posição %ld\n", search, result - source);
//     } else {
//         printf("Não achou.\n");
//     }
//     return 0;
// }