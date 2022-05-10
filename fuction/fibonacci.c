#include <stdio.h>

int fibonacci(int n);

int main() {
    for(int count = 1; count <13; ++count) {
        printf("%d ", fibonacci(count));
    }

    return 0;
}

int fibonacci(int n) {
    if (n > 2) {
        return fibonacci(n - 1) + fibonacci(n - 2);
    } else {
        return 1;
    }
}