#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> vec(n);
    
    for (auto &x : vec) cin >> x; 

    vector<long long> dp(n, 0);
    dp[n - 1] = 0;
    map<long long, long long> mp;

    for (long long i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            dp[i] = 0;
        } else {
            dp[i] = dp[i + 1];
            if (mp.count(vec[i])) dp[i] = max(dp[i], mp[vec[i]] - i + 1);
        }
        long long cnt = 0;
        if (i != n - 1) cnt = dp[i + 1];
        cnt += i;
        if (mp.count(vec[i])) 
            mp[vec[i]] = max(cnt, mp[vec[i]]);
        else 
            mp[vec[i]] = cnt;
    }

    cout << dp[0] << endl; 
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
