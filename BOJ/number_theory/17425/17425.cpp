#include <iostream>
 
using namespace std;
 
unsigned long long int dp[1000005];
 
void init()
{
    for(int i = 1; i <= 1000000; ++i)
    {
        for(int j = i; j <= 1000000; j += i)
            dp[j] += i;
    }

    for(int i = 2; i <= 1000000; ++i)
        dp[i] += dp[i-1];
}

int main()
{
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