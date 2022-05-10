#include <stdio.h>

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main() {
    unsigned long num = 10;

    print_binary(num);
    printf("\n");
    print_binary_loop(num);

    return 0;
}

void print_binary(unsigned long num) {
    int remainder = num % 2;

    if (num >= 2) {
        print_binary(num/2);
    }

    printf("%d", remainder);

    return;
}

void print_binary_loop(unsigned long num) {
    while (1) {
        int quotient = num / 2;
        int remainder = num % 2;

        printf("%d", remainder);

        num = quotient;

        if (num == 0) break;
    }
    printf("\n");
}