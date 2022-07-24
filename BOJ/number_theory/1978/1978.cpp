#include <iostream>
#include <vector>

using namespace std;

bool check_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    int count = 0;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (check_prime(num)) {
            count++;
        }
    }

    cout << count;
}