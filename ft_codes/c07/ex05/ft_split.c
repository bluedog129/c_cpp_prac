/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:22:06 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/05 10:17:42 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ch(char *str, char a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
		{
			return (0);
		}
		i++;
	}
	if (a == '\0')
		return (0);
	return (1);
}

void	ft_putword(char *result, char *word, char *charset)
{
	int	i;

	i = 0;
	while (ft_ch(charset, word[i]) == 1)
	{
		result[i] = word[i];
		i++;
	}
	result[i] = '\0';
}

void	ft_divword(char **result, char *str, char *charset)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		len = 0;
		if (ft_ch(charset, str[i]) == 0)
			i++;
		else
		{
			len = 0;
			while (ft_ch(charset, str[i + len]) == 1)
				len++;
			result[j] = (char *)malloc(sizeof(char) * (len + 1));
			ft_putword(result[j], str + i, charset);
			i += len;
			j++;
		}
	}
}

int	ft_cnt_word(char *str, char *charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (ft_ch(charset, str[i + 1]) == 0 && ft_ch(charset, str[i]) == 1)
			word++;
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	char	**result;

	word = ft_cnt_word(str, charset);
	result = (char **)malloc(sizeof(char *) * (word + 1));
	result[word] = 0;
	ft_divword(result, str, charset);
	return (result);
}
/*
#include <stdio.h>
int main() {
    char **ex05_split1;
    char **ex05_split2;
    char **ex05_split3;
	char *ex05_str1 = "hello my name is hunpark!";
	char *ex05_str2 = "good@day!cat#dog!vim12!";
	char *ex05_str3 = "i1my2me3mine4you5your6you7yours";



	ex05_split1 = ft_split(ex05_str1, " ");
    ex05_split2 = ft_split(ex05_str2, "@!#");
    ex05_split3 = ft_split(ex05_str3, "1234567");
    printf("---test1---\n");
	for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("\n\n");
    printf("---test2---\n");
    for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split2[j]);
	}
    printf("\n\n");
    printf("---test3---\n");
    for (int j = 0; j < 8; j++)
	{
		printf("%s\n", ex05_split3[j]);
	}
    printf("\n\n");
	free(ex05_split1);
    free(ex05_split3);
    free(ex05_split2);
}
*/
