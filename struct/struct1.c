#include <stdio.h>

struct Human {
    int age;
    int height;
    int weight;
};

int main() {
    struct Human Psi;

    Psi.age = 99;
    Psi.height = 185;
    Psi.weight = 80;

    printf("Psi 에 대한 정보 \n");
    printf("age : %d \n", Psi.age);
    printf("height : %d \n", Psi.height);
    printf("weight : %d \n", Psi.weight);

    return 0;
}