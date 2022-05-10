#include <stdio.h>

int add (int num1, int num2) {
    return num2 - num1;
}

void swap (int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int a = 5;
    int b = 10;

    int* ptr;
    int* ptr2 = &b;

    ptr = &a;

    printf("a = %d \nb = %d", a, b);
    swap(&a, &b);
    printf("\n");
    printf("after swap");
    printf("\n");
    printf("a = %d \nb = %d", a, b);
    printf("\n");
    printf("b - a = %d", *ptr2 - *ptr);
}

