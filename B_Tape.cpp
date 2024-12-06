#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
   
    vector<int> dis(n - 1);
    for (int i = 1; i < n; i++) {
        dis[i - 1] = vec[i] - vec[i - 1]-1;
    }
    
   
    int ans = vec[n - 1] - vec[0] + 1;
    
   
    sort(dis.begin(), dis.end(), greater<int>());
    
    
    for (int i = 0; i < k - 1 && i < dis.size(); i++) {
        ans -= dis[i] ; 
    }
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
