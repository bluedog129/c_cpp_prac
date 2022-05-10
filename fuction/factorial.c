#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main() {
    int num = 5;

    printf("%d\n", (int)loop_factorial(num));
    printf("%d\n", (int)recursive_factorial(num));
}

long loop_factorial(int n) {
    long result = 1;

    for (int i = n; i >= 1; i--) {
        result *= i;
    }

    return result;
}

long recursive_factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * recursive_factorial(n-1);
}