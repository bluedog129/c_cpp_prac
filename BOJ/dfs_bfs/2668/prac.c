#include <stdio.h>

int n, cnt, pick[111];
int cycle[111];
int visited[111];
int value[111];

void dfs(int num) {
    if (visited[num])
        return;
    visited[num]++;
    value[pick[num]]++;
    dfs(pick[num]);
}

int main(void) {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", pick + i);
    }

    for (int num = 1; num <= n; num++) {
        if (cycle[num])
            continue;
        
        for (int i = 1; i <= n; i++)
            visited[i] = value[i] = 0;
        
        dfs(num);

        int isCycle = 1;
        for (int i = 1; i <= n; i++) {
            if (visited[i] != value[i])
                isCycle = 0;
        }
        
        if (isCycle) {
            for (int i = 1; i <= n; i++) {
                if (visited[i]) {
                    cycle[i] = 1;
                    cnt++;
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