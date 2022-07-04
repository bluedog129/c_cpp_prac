#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	// 들어오는 인자의 갯수가 2인 조건
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			// 인자의 1 인덱스 데이터에 'a'가 들어가면
			if (av[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			i++;
		}
		// 'a'가 들어가있지 않으면 개행만
		write(1, "\n", 1);
		return (0);
	}
	// 인자의 갯수가 2가 아니면 두개다
	write(1, "a\n", 2);
	return (0);
}