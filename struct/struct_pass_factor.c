#include <stdio.h>

struct TEST {
    int age;
    int gender;
};

int set_human(struct TEST *a, int age, int gender);

int main() {
    struct TEST human;
    set_human(&human, 10, 1);
    printf("AGE : %d // Gender : %d ", human.age, human.gender);

    return 0;
}

int set_human(struct TEST *a, int age, int gender) {
    // a.age = age; 를 했을 때 age의 값이 바뀌는 것은
    // 실제 main 함수에서의 human이 아니라 set_humam 함수의 a라는 
    // human과 별개의 구조체변수의 age 멤버의 값이 바뀌게 되는 것
    // 따라서 특정한 변수의 값을 다른 함수를 통해 바꾸려면 변수의 주소값을 전달해야 한다.
    // 라는 룰을 지키지 않음
    // a.age = age;
    // a.gender = gender;


    // 이 코드는 위의 코드와 다르게 구조체의 포인터를 인자로 취하고 있다
    // 따라서 set_human 함수를 호출할 때에도 human의 주소값을 인자로 전달
    // a -> age는 human 구조체 변수의 int형 멤버 age를 지칭하며 
    // age는 단순히 set_human 함수에서 인자로 받아들여진 int형의 age라는 변수를 가리킴
    a->age = age;
    a->gender = gender;
    
    return 0;
}