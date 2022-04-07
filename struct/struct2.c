#include <stdio.h>

char copy_str(char *dest, const char *src);

struct Books {
    // 구조체의 정의에서는 변수를 초기화 할 수 없다.
    char name[30];
    char auth[30];
    char publ[30];
    int borrowed;
};

int main() {
    struct Books Harry_Potter;

    copy_str(Harry_Potter.name, "Harry Potter");
    copy_str(Harry_Potter.auth, "J.K. Rolling");
    copy_str(Harry_Potter.publ, "Scholastic");
    Harry_Potter.borrowed = 0;

    printf("책 이름 : %s \n", Harry_Potter.name);
    printf("저자 이름 : %s \n", Harry_Potter.auth);
    printf("출판사 이름 : %s \n", Harry_Potter.publ);

    return 0;
}

char copy_str(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    
    *dest = '\0';

    return 1;
}