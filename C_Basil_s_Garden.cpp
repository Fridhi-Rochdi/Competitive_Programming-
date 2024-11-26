#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n;
    cin >> n;

    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
   
    vector<long long> dp(n, 0);
    dp[0] = vec[n-1]; 
    
  
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1] + 1, vec[n-i-1]);
    }
    
    cout << dp[n-1] << endl;  
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
