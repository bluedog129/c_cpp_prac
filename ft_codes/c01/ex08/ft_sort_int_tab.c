/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:01:10 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/19 19:15:06 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		while (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

#include <stdio.h>
int main()
{
	int size = 5;
	int tab[5] = {5, 4, 3, 2, 1};

	ft_sort_int_tab(tab, size);

	for(int i = 0; i<size; i++)
	{
		printf("%d", tab[i]);
	}
}