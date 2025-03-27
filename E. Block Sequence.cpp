#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for (auto &x : vec) cin >> x; 

  
    vector<long long> dp(n+1, LLONG_MAX);
    dp[n ] = 0; 

   
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = dp[i + 1] + 1; 
        if (i + vec[i]+1 <= n) { 
            dp[i] = min(dp[i], dp[i + vec[i] + 1] );
        }
    }

    cout << dp[0] << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
