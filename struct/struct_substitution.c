#include <stdio.h>

struct TEST {
    int i;
    char c;
};

int main() {
    struct TEST st, st2;

    st.i = 1;
    st.c = 'c';

    // st를 st2에 대입, 우리가 변수 i를 j에 대입하면 i의 값이 j에 그대로 복사 되듯
    // st2의 멤버 i의 값은 st의 멤버 i의 값과 같아진다.
    st2 = st;

    printf("st2.i : %d \n", st2.i);
    printf("st2.c : %c \n", st2.c);

    return 0;
}
