#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    
   

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        
    }
     sort(a.begin(), a.end());
      vector<long long> ans;
    for (int i = 0; i < n; ++i) {
        
        ans.push_back(a[i]);
    }
    vector<long long> b(n);

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        
        ans.push_back(b[i]);
    }

    
    sort(ans.begin(), ans.end());
    auto it = unique(ans.begin(), ans.end());//bech nfas5ou la3dad eli 9a3dine yet3awdou 
     ans.resize(distance(ans.begin(), it));//  na3mloulou resize

    long long res = 0;
    for (int i=0;i<ans.size();i++) {
        long long l = lower_bound(a.begin(), a.end(), ans[i]) - a.begin();
        long long r = lower_bound(b.begin(), b.end(), ans[i]) - b.begin();
        
        if (l - r <= k) {
            long long cnt = (n - r) * ans[i];
            res = max(res, cnt);
        }
    }

    cout << res << endl;
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
