#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4)
	{
		while (av[1][i] != '\0')
		{
            // 세번째 인자와 네번째 인자의 두번째 인덱스가 널값이면
			if (av[2][1] == '\0' && av[3][1] == '\0')
			{
                // 두번째 인덱스와 바꿔야할 대상이 들어간 인덱스의 데이터가 같으면
				if (av[1][i] == av[2][0])
                // 바꿀 값을 출력
					write(1, &av[3][0], 1);
                // 그 외에는 그냥 그대로 출력
				else
					write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}