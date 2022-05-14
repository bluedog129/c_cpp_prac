/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:57:24 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/27 17:24:11 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n <= nb / n)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
	printf("sqrt of %d is %d\n", -114, ft_sqrt(-114));
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
    printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
    printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
    printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
    printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
    printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
    printf("sqrt of %d is %d\n", 1087944256, ft_sqrt(1087944256));
    printf("sqrt of %d is %d\n", 1097828049, ft_sqrt(1097828049));
    printf("sqrt of %d is %d\n", 1995140889, ft_sqrt(1995140889));
    printf("sqrt of %d is %d\n", 1026167426, ft_sqrt(1026167426));
    printf("sqrt of %d is %d\n", 1005841225, ft_sqrt(1005841225));
    printf("sqrt of %d is %d\n", 1994044556, ft_sqrt(1994044556));
    printf("sqrt of %d is %d\n", 121682961, ft_sqrt(121682961));
    printf("sqrt of %d is %d\n", 1027192518,
 	ft_sqrt(1027192518));
    printf("sqrt of %d is %d\n", 700713841, ft_sqrt(700713841));
    printf("sqrt of %d is %d\n", 369487135, ft_sqrt(369487135));
}
*/
