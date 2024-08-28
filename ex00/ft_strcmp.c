/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:39:32 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/28 08:36:52 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-1);
	}
	else if (*s1 != '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "";
// 	char s2[] = "";
// 	int result = ft_strcmp(s1, s2);
// 	printf("%d", result);
// 	return 0;
// }