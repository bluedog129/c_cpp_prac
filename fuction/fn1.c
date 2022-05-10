#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WIDTH 80
#define NAME "HYOJONG CHOI"
#define ADRESS "Busan, Korea"

void print_multiple_char(char c, int n_starts, bool endl); //prototype

void print_centered_str(char str[]);

int main() {
    
    print_multiple_char('*', WIDTH, true);

    print_centered_str(NAME);
    print_centered_str(ADRESS);

    print_multiple_char('*', WIDTH, false);
}

void print_multiple_char(char c, int n_starts, bool endl) {
    for(int i=0; i<n_starts; i++) {
        printf("%c", c);
    }

    if (endl == true) {
        printf("\n");
    }
}

void print_centered_str(char str[]) {
    int n_blanks = 0;
    n_blanks = (WIDTH - strlen(str)) / 2;
    print_multiple_char(' ', n_blanks, false);
    printf("%s\n", str);
}