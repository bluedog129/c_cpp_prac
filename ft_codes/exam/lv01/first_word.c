#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        // 공백/탭은 따로 넘김
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        // 널/ 공백/ 탭이 아니면 출력
        while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}