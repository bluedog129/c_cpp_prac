/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:13:08 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/28 17:18:22 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	positive;

	result = 0;
	positive = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			positive *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = (result * 10) + *str - '0';
		str++;
	}
	return (result * positive);
}
/*
#include <stdio.h>
int main() 
{
	char a[] = "---12345";
	char b[] = "--12345";
	char c[] = "+-+-+--8080";

	printf("%d", ft_atoi(a));
	printf("\n");
	printf("%d", ft_atoi(b));
	printf("\n");
	printf("%d", ft_atoi(c));

	return (0);
}
*/
