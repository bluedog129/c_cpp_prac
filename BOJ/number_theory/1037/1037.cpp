#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_N(vector<int> v) {
    sort(v.begin(), v.end());
    return (v[0] * v[v.size() - 1]);
}

int main() {
    int n;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num; 
        cin >> num;
        v.push_back(num);
    }

    cout << find_N(v);
}