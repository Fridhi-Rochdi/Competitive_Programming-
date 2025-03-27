#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        
        set<int>b;
        for (int i = 0; i < k; ++i) {
            int q;
            cin >> q;
            b.insert(q);
        }
        
        string result="";
        for (int i = 0; i < m; ++i) {
            
            if (b.count(a[i])==0 && b.size()==n-1){
                result += '1';
            } 
            else if(b.size()==n)result += '1';
            else {
                result += '0';
            }
        }
        
        cout << result << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
