#include <stdio.h>

struct test {
    int a, b;
};

int main() {
    struct test st;
    struct test *ptr;

    ptr = &st;

    // *ptr.a 를 사용하게 되면 ptr.a 를 먼저 실행한 후, 
    // 그 값에 * 를 한 것에 2 가 들어가게 된다. 
    // 즉 *ptr.a 는 *(ptr.a) 와 동일한 문장
    // (*ptr).a = 1;
    // (*ptr).b = 2;

    // (*ptr).a = 1 이라는 문장을 ptr->a = 1 로 간단히 표현 가능
    // 단순히 사용자의 편의를 위해서 -> 라는 새로운 기호를 도입
    ptr->a = 1;
    ptr->b = 2;

    printf("st의 a 멤버 : %d \n", st.a);
    printf("st의 b 멤버 : %d \n", st.b);
    
    return 0;
}