#include <stdio.h>

struct employee {
    int age;
    int salary;
};

struct company {
    struct employee data;
    char name[10];
};

int main() {
    struct company Kim;

    Kim.data.age = 31;
    Kim.data.salary = 3000000;

    printf("Kim's age : %d \n", Kim.data.age);
    printf("Kim's salary : %d $/year", Kim.data.salary);

    return 0;
}