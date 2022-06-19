int		ft_atoi(const char *str)
{
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;
    //non printalbe 까지 민다
	while (str[i] <= 32)
		i++;
    // - 처리
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
    // +는 걍 넘김
	else if (str[i] == '+')
		i++;
    // 0~9 이거나 널이 아니면 result에 10을 곱하고 str[i]를 더한다
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
    // 마지막으로 result에 음수처리되는 변수 곱함
	return (result * n);
}