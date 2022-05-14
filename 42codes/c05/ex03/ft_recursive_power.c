/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:58:03 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/27 15:27:17 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int main() {
	printf("%d",ft_recursive_power(1000, 3));
}
*/
