#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int a;
    int b;
    int result;
    char op;

    result = 0;
    if (ac == 4)
    {
      // 문자열로받은 인덱스 1,3을 정수형으로 변환하기 위해 atoi로 
      a = atoi(av[1]);
      // 인덱스 2는 op변수에 넣는다
      op = av[2][0];
      b = atoi(av[3]);
      if (op == '+')
			  result = a + b;
      else if (op == '-')
			  result = a - b;
      else if (op == '*')
        result = a * b;
		  else if (op == '/')
			  result = a / b;
		  else if (op == '%')
		  	result = a % b;
		  printf("%d\n", result);
    }
    else
		  write(1, "\n", 1);
	return (0);
}