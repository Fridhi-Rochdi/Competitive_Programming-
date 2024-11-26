#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
   

    for (int i = 0; i < n; i++) {
        cin >> a[i];
      
    }

   
    for (int j = 1; ; j++) {
        long long k = 1LL << j;  
        set<long long >st;

       
        for (int i = 0; i < n; i++) {
            st.insert(a[i] % k);
            if (st.size() > 2) break; 
        }

       
        if (st.size() == 2) {
            cout << k << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
