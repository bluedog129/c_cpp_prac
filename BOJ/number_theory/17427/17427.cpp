#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += (n / i) * i;
    }

    cout << sum;

    return 0;
}