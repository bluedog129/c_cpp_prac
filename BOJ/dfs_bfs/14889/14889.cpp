#include <iostream>
#include <math.h>

using namespace std;
int stats[21][21];
bool check[22];
int n;
int result = 1000000000;

void dfs(int cnt, int pos) {
    if (cnt == n / 2) {
        int start, link;
        start = 0;
        link = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (check[i] == true && check[j] == true) start += stats[i][j];
                if (check[i] == false && check[j] == false) link += stats[i][j];
            }
        }
        result = min(result, abs(link - start));

        return;
    }

    for (int i = pos; i < n; i++) {
        check[i] = true;
        dfs(cnt + 1, pos + 1);
        check[i] = false;
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> stats[i][j];
        }
    }
    dfs(0, 1);
    cout << result;
}