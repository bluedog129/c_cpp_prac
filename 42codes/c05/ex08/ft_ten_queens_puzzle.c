/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:15:43 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/01 01:03:37 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int board[10])
{
	int		i;
	char	temp;

	i = 0;
	while (i < 10)
	{
		temp = board[i] + '0';
		write(1, &temp, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	board_check(int board[10], int x, int y)
{
	int	i;

	i = x - 1;
	while (i >= 0)
	{
		if (y == board[i])
			return (0);
		if (y - (x - i) == board[i])
			return (0);
		if (y + (x - i) == board[i])
			return (0);
		i--;
	}
	return (1);
}

void	ft_queen(int board[10], int x, int *count)
{
	int	y;

	y = 0;
	if (x == 10)
	{
		*count += 1;
		print_board(board);
		return ;
	}
	while (y < 10)
	{
		board[x] = y;
		if (board_check(board, x, y))
			ft_queen(board, x + 1, count);
		y++;
	}
}

void	init_board(int board[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	init_board(board);
	ft_queen(board, 0, &count);
	return (count);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_ten_queens_puzzle());
}
*/
