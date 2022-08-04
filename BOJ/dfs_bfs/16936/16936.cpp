#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<long long> vec_b;
vector<long long> vec_a;
int n;

void dfs(long long x, int cnt) {
    if (cnt == n) {
        for (int i = 0; i < n; i++) {
            cout << vec_a[i] << " ";
        }
        exit(0);
    }

    if (x % 3 == 0 && find(vec_b.begin(), vec_b.end(), x / 3) != vec_b.end()) {
        vec_a.push_back(x / 3);
        dfs(x / 3, cnt + 1);
        vec_a.pop_back();
    }
    if (find(vec_b.begin(), vec_b.end(), 2 * x) != vec_b.end()) {
        vec_a.push_back(2 * x);
        dfs(2 * x, cnt + 1);
        vec_a.pop_back();
    }

    return;
}

int main() {
    cin >> n;

    long long num;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &num);
        vec_b.push_back(num);
    }

    for (int i = 0; i < vec_b.size(); i++) {
        vec_a.push_back(vec_b[i]);
        dfs(vec_b[i], 1);
        vec_a.pop_back();
    }

    return 0;
}