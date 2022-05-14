/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:49:55 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/25 00:02:34 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar(num % 10 + '0');
}
/*
#include <stdio.h>
int main() {
	int n1 = -2147483648;
	int n2 = 1234124;
	int n3 = -1432523;

	ft_putnbr(n1);
	printf("\n");
	ft_putnbr(n2);
	printf("\n");
	ft_putnbr(n3);
}
*/
