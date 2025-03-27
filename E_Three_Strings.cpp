#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;

   
    if (c.size() != a.size() + b.size()) {
        cout << "-1\n";
        return;
    }

    
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));

    dp[0][0] = 0;

  
    for (int i = 1; i <= n; i++) {
        dp[i][0] = dp[i - 1][0] + (c[i - 1] != a[i - 1]);
    }

    
    for (int j = 1; j <= m; j++) {
        dp[0][j] = dp[0][j - 1] + (c[j - 1] != b[j - 1]);
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = min(
                dp[i - 1][j] + (c[i + j - 1] != a[i - 1]),
                dp[i][j - 1] + (c[i + j - 1] != b[j - 1])  
            );
        }
    }

    
    cout << dp[n][m] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
