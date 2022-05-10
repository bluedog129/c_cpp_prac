#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, input, sum = 0;
    int subject, students;
    int **arr;

    printf("과목 수 : ");
    scanf("%d", &subject);

    printf("학생의 수 : ");
    scanf("%d", &students);

    arr = (int **)malloc(sizeof(int *) * subject);
    
    for (i = 0; i <subject; i++) {
        arr = (int **)malloc(sizeof(int *) * subject);
    }
    
    

}