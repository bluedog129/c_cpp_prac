#include <iostream>
#include <vector>

using namespace std;

vector<long long> vec_b;
vector<long long> vec_a;
int n;

int main() {
    n = 10;

    for (int i = 0; i < n; i++) {
        vec_b.push_back(i);
    }

    for (int i = 0; i < vec_b.size(); i++) {
        cout << vec_b[i];
    }

    vec_b.pop_back();
    vec_b.pop_back();
    vec_b.pop_back();

    for (int i = 0; i < vec_b.size(); i++) {
        cout << vec_b[i];
    }
}