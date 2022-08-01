#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int testcase;
int m,n;
int x,y;
int i,j;

// gcd : 최대 공약수
int gcd(int a,int b){
    // a에 항상 큰 값을 위치시키기 위함
    int tmp;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    // 유클리드 호제법
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// lcm : 최소 공배수
int lcm(int a,int b){
    return a * b / gcd(a,b);
}

int main(int argc, const char * argv[]) {
    // cin,cout 속도향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> testcase;
    for(int t=0; t<testcase; t++){
        cin >> m >> n >> x >> y;
        
        int last = lcm(m,n);
        i = x;
        while(i <= last){
            j = i % n;
            if(j == 0) j = n;
            if(j == y) break;
            i += m;
        }
        if(i > last) cout << -1 << endl;
        else cout << i << endl;
    }
    
    return 0;
}