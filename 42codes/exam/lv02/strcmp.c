int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
    // s1, s2 널값 x  그리고 두개 같으면
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}