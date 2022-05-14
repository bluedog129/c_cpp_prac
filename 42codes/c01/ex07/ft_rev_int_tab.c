/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:59:15 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/18 11:52:37 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	point;
	int	front;
	int	back;

	front = 0;
	back = size - 1;
	while (front < (size / 2))
	{
		point = tab[front];
		tab[front] = tab[back];
		tab[back] = point;
		front++;
		back--;
	}
}
