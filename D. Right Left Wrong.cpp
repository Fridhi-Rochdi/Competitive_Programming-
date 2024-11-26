#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i]; 
    }
    string s;
    cin >> s;
    vector<long long> prefixsum(n+1, 0);
    
    for (int i = 1; i <= n; i++) {
        prefixsum[i] = prefixsum[i-1] + vec[i-1];
    }
    long long  ans = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
        while (i < n && s[i] != 'L') {
            i++;
        }
        if (i == n) break;
        
        while (j >= 0 && s[j] != 'R') {
            j--;
        }
        if (j == -1) break;
        
        if (i > j) break;
        
        ans += prefixsum[j+1] - prefixsum[i];
        j--;
        i++;
    }
    
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
