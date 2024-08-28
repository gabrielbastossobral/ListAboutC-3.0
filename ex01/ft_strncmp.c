/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:28:24 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/27 16:33:53 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && s1[count] && s2[count])
	{
		if (s1[count] > s2[count])
		{
			return (1);
		}
		else if (s1[count] < s2[count])
		{
			return (-1);
		}
		count++;
	}
	if (s1[count] == '\0' && s2[count] != '\0')
	{
		return (-1);
	}
	else if (s1[count] != '\0' && s2[count] == '\0')
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "hello";
// 	char s2[] = "hello";
// 	int n = 3;
// 	int result = ft_strncmp(s1, s2, n);
// 	printf("%d", result);
// 	return 0;
// }