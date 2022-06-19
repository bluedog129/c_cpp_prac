/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euiclee <euiclee@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:18:47 by euiclee           #+#    #+#             */
/*   Updated: 2022/04/20 23:49:06 by euiclee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char *s1 = "Hello";
//	char *s2 = "Helio";
//
//	printf("%d\n", strcmp(s1, s2));
//	printf("%d\n", ft_strcmp(s1, s2));
//}
