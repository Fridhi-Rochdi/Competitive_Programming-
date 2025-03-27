#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    long long dp[4]={0};
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 2)
        {
            dp[2] = (dp[2] + dp[2]) % 998244353;
        }
        dp[vec[i]] = (dp[vec[i] - 1] + dp[vec[i]]) % 998244353;
    }
    cout << dp[3] % 998244353 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}