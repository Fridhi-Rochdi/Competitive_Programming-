#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    set<int> st;
    
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            st.insert(a[i] + b[j]);
           
            if (st.size() >= 3) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    
   
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
