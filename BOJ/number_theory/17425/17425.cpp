#include <iostream>
 
using namespace std;
 
unsigned long long int dp[1000001];
 
void init()
{
    for(int i = 1; i <= 1000000; ++i)
    {
        // 각 배수(i)를 배수들 값(j)에 계속 더해줌 (소수를 하나하나 더해준다고 생각하면 됨)
        for(int j = i; j <= 1000000; j += i)
            dp[j] += i;
    }
    // 이전의 약수의 갯수를 하나하나 더해주면서 올라감
    for(int i = 2; i <= 1000000; ++i)
        dp[i] += dp[i - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    init();
 
    cin >> t;
 
    while(t--)
    {
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}