#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        vec[i]--; 
    }
    
    string s;
    cin >> s;

    vector<bool> vis(n, false);
    vector<int> ans(n, 0);  

    for (int i = 0; i < n; i++) {
        if (vis[i]) continue; 
        vector<int> cycle;
        int depart = i;
        
    
        while (!vis[depart]) {
            vis[depart] = true;
            cycle.push_back(depart);
            depart = vec[depart];
        }
        
        
        int cnt = count_if(cycle.begin(), cycle.end(), [&s](int idx) { return s[idx] == '0'; });
        for (int j = 0; j < cycle.size(); j++) {
            ans[cycle[j]] = cnt;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
