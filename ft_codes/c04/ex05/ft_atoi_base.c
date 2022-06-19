/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:59:24 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/01 00:06:34 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	ft_str_check(char *str, int *i)
{
	int	minus;

	minus = 1;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		*i += 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			minus *= -1;
		*i += 1;
	}
	return (minus);
}

int	ft_cmp(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	i;
	int	minus;
	int	result;
	int	num;

	i = 0;
	base_len = ft_base_check(base);
	if (base_len <= 1)
		return (0);
	minus = ft_str_check(str, &i);
	result = 0;
	while (str[i] != '\0')
	{
		num = ft_cmp(str[i], base);
		if (num != -1)
			result = (result * base_len) + num;
		else
			break ;
		i++;
	}
	return (result * minus);
}
/*
#include <stdio.h>
int main() {
	printf("------ ex05 ------\n\n");
	char ex05_str1[] = " \n -+-++-+2147483648";
	char ex05_str2[] = "   ---+AABCDESSEZ";
	char ex05_str3[] = "   ++136667";
	char ex05_str4[] = "   -----+-+!!@@#..<";
	char ex05_str5[] = "  \n \tatoi12-+123base";

	printf("-2147483648\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, "0123456789"));

	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, ""));

	printf("-67174\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABCDES"));

	printf("-1\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABZ"));

	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "A-+"));

	printf("12347\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	printf("1126397\n");
	printf("%d\n\n", ft_atoi_base(ex05_str4, "!@#$%^&*()~?><'."));

	printf("27\n");
	printf("%d\n\n", ft_atoi_base(ex05_str5, "atoi"));
}
*/
