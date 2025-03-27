#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    map<int, int> mp;

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            mp[a[i][j]] = 1;
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int current_value = a[i][j];

            
            if ((i > 0 && a[i - 1][j] == current_value) ||
                (i < n - 1 && a[i + 1][j] == current_value) ||
                (j > 0 && a[i][j - 1] == current_value) ||
                (j < m - 1 && a[i][j + 1] == current_value)) {
                    if(mp[current_value]==1){
                mp[current_value]++;}
            }
        }
    }
    int result = 0;
    int maxi=0;
    for (const auto& entry : mp) {
        result += entry.second; 
        maxi=max(entry.second,maxi);
    }

    cout << result-maxi << "\n";
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
