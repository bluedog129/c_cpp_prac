#include <iostream>

using namespace std;

int main() {
    int t;
    int m, n, x, y;
    int year;
    int flag = 0;

    cin >> t;

    while (t--) {
        year = 0;
        cin >> m >> n >> x >> y;
        while (1) {
            if (year == 2147483647) break;
            if (((year - x) % m == 0) && ((year - y) % n == 0)) {
                flag = 1;
                break;
            }
            year++;
        }
        if (flag == 0) cout << -1 << "\n";
        else cout << year << "\n";
    }
}