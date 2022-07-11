#include <stdio.h>

int n, cnt, pick[111]; // 입력, 답, 입력
int cycle[111]; // 사이클 유무
int visited[111]; // 1~N 중 방문한 곳
int value[111]; // 입력 값 중 방문한 곳

void dfs(int num) {
    if (visited[num])
        return; // 이미 방문한 곳이면 더 방문할 필요가 없다
    visited[num]++; // 순서대로인 정수가 방문했다
    value[pick[num]]++; // 입력 값이 방문했다
    dfs(pick[num]); // 입력 값을 방문한다
}

int main(void) {
    scanf("%d", &n); // 입력
    for (int i = 1; i <= n; i++)
        scanf("%d", pick + i);
    
    for (int num = 1; num <= n; num++) {
        if (cycle[num])
            continue; // 사이클이면 방문하지 않는다.
        
        for (int i = 1; i <= n; i++)
            visited[i] = value[i] = 0; // 매번 방문한 곳들을 초기화 해준다
        
        dfs(num); // 방문한다.
        
        int isCycle = 1;
        for (int i = 1; i <= n; i++)
            if (visited[i] != value[i])
                isCycle = 0; // 방문한 곳과 입력 값이 다르다면
        // 사이클이 아니다
        
        if (isCycle) {
            for (int i = 1; i <= n; i++) {
                if (visited[i]) { // 방문한 곳이
                    cycle[i] = 1; // 사이클이다.
                    cnt++; // 사이클의 개수
                }
            }
        }
    }
    
    printf("%d\n", cnt); // 출력
    for (int i = 1; i <= n; i++)
        if (cycle[i])
            printf("%d\n", i);
    
    return 0;
}