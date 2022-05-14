/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:47:45 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/23 20:46:49 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
/*
#include <stdio.h>
#include <string.h>
int main() 
{
	printf("ex00\n");
	char ex00_s1[] = "hello forld!";
	char ex00_s2[] = "hello world!";
	printf("s1 : %s\ns2 : %s\n", ex00_s1, ex00_s2);
	printf("strcmp : %d\nft_strcmp : %d\n\n\n", strcmp(ex00_s1,ex00_s2), \
	ft_strcmp(ex00_s1, ex00_s2));
}
*/
