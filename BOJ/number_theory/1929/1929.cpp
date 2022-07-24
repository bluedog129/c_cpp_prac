#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool check[m + 1];

    for (int i = 0; i < m + 1; i++) {
        check[i] = false;
    }

    check[0] = check[1] = true;

    for (int i = 2; i * i <= m; i++) {
        if (check[i] == true) {
            continue;
        }
        for (int j = i + i; j <= m; j += i) {
            check[j] = true;
        }
    }

    for (int i = n; i <= m; i++) {
        if (check[i] == false) {
            cout << i << "\n";
        }
    }
}