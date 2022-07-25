#include <iostream>

using namespace std;

int arr[101];
int N;

void boy_picked(int n) {
    for (int i = n; i <= N; i += n) {
        arr[i] = !arr[i];
    }
}

void girl_picked(int n) {
    int left = n - 1;
    int right = n + 1;

    arr[n] = !arr[n];
    while (left >= 1 && right <= N) {
        if (arr[left] != arr[right])
            break;
        arr[left] = !arr[left];
        arr[right] = !arr[right];
        left--;
        right++;
    }
}

int main() {
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    int st_n;

    cin >> st_n;
    
    for (int i = 0; i < st_n; i++) {
        int gender, n;
        cin >> gender >> n;
        
        if (gender == 1) {
            boy_picked(n);
        } else {
            girl_picked(n);
        }
    }
    
    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
        if (i % 20 == 0) cout << "\n";
    }

    return 0;
}