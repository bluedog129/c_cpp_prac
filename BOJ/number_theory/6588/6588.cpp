#include <iostream>

using namespace std;

void erasto(bool *check) {
    check[0] = false;
    check[1] = false;

    for (int i = 2; i * i < 500000; i++) {
        if (check[i] == false) continue;
        
        for (int j = i * i; j < 1000001; j += i) {
            check[j] = false;
        }
    }
    // 2는 짝수이므로 골드바흐 추측의 연산에서 제외하여야 함
    check[2] = false;
}

int main() {
    bool flag;
    int n = 1;

    // 에라스토테네스로 소수인 수들 만들어 놓음
    bool check[1000001];
    for (int i = 0; i < sizeof(check) / sizeof(bool); i++) {
        check[i] = true;
    }
    erasto(check);

    while(n) {
        // n받고
        cin >> n;

        // 입력 받은 값을 만드는 소수들을 구한다.
        for (int i = 0; i <= n / 2; i++) {
            if (check[i] && check[n - i]) {
                cout <<  n << " = " << i << " + " << n - i << endl;
                flag = true;
                break;
            }
        }
        
        // 답이 없는경우
        if(!flag) cout << "Goldbach's conjecture is wrong." << '\n';
    }
}