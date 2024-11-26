#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());
    
    long long ans = 0;
    
    for (int i = 0; i < n; ++i) {
        if (vec[i] > m) break;
        
        int j = i;
        while (j < n && vec[j] == vec[i]) ++j;
        
        int c = j;
        while (c < n && vec[c] == vec[i] + 1) ++c;
        
        for (int k = 0; k <= j - i; ++k) {
            if (vec[i] * k > m) break;
            
            long long res = vec[i] * k;
            long long res1 = min((m - res) / (vec[i] + 1), static_cast<long long>(c - j));
            res += res1 * (vec[i] + 1);
            
            ans = max(ans, res);
        }
        
        i = j - 1;  
    }
    
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
