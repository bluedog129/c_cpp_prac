/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:45:53 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/27 15:03:47 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 0)
		res *= nb--;
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(10));
}
*/
