/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euiclee <@student.42seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 10:21:00 by euiclee           #+#    #+#             */
/*   Updated: 2022/04/16 11:26:07 by euiclee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//#include <stdio.h>
//int main(void)
//{
//  printf("%d ", ft_strlen("hello"));
//  printf("%d ", ft_strlen(""));
//  printf("%d ", ft_strlen("a\n"));
//}
