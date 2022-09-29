#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<bool> remote(10);

int check(int n) {
    if (n == 0) {
        if (remote[0]) return 0;
        else return 1;
    }

    int len = 0;
    while (n > 0) {
        if (remote[n % 10]) return 0;
        n = n / 10;
        len += 1;
    }
    return len;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        remote[x] = true;
    }
    // count : 리모컨을 누른 최소 횟수
    int count = abs(n - 100);
    
    // 리모컨의 숫자를 누른 횟수를 구하기 위한 반복문
    for (int i = 0; i <= 1000000; i++) {
        int c = i;
        int len = check(c);
        if (len > 0) {
            int press = abs(c - n);
            if (count > press + len) count = press + len;
        }
    }
    cout << count;
    
    return 0;
}