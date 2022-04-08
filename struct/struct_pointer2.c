#include <stdio.h>

struct TEST {
    int c;
    int *pointer;
};

int main() {
    // struct TEST 형의 구조체 변수 t와 
    // struct TEST 형을 가리키는 포인터 pt를 선언
    struct TEST t;
    // struct TEST 도 창조해낸 하나의 타입이며 이를 가리키는 pt포인터 역시
    // 다른 모든 포인터와 같은 크기이다. 즉 pt는 절대 구조체가 아니며,
    // pt는 단순히 구조체 변수 t가 저장되어 있는 메모리공간의 주소값을 보관하고 있을 뿐이다.
    struct TEST *pt = &t;

    pt -> c = 1;

    printf("t.c : %d \n", t.c);

/////////////////////////////////////////////////////////////////////

    int i = 0;

    // t의 멤버 pointer는 i를 가리키게 된다.
    t.pointer = &i;
    // t의 멤버 pointer가 가리키는 변수의 값을 3으로 만든다.
    // 우선순위를 고려하면 .가 *보다 높으므로 t.pointer가 먼저 해석되고 
    // 그 다음에 *(t.pointer) 형태로 해석되게 된다.
    *t.pointer = 3;

    printf("i : %d\n", i);
    

    return 0;
}