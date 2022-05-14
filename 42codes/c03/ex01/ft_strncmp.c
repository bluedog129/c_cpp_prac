/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:52:23 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/21 16:50:22 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || (s1[i] == '\0' || s2[i] == '\0'))
		{
			result = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (result);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "abcdef";
	char s2[] = "abcdefggg";
	printf("%d", ft_strncmp(s1, s2, 7));
}
*/
