#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, m, q;
    cin >> n >> m >> q;
    
    vector<long long> a(n);
    vector<long long> b(m); 
    
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < m; i++) { 
        cin >> b[i];
    }

    map<long long, bool> mp;
    long long cnt = 0;
    if(a[0]!=b[0]){
        cout<<"TIDAK"<<endl;
        return;
    }

    for (int i = 0; i < n && cnt < m; i++) {
        mp[a[i]] = true;

        while (cnt < m && mp[b[cnt]]) {
            cnt++;
        }

      
        if (cnt == m) {
            cout << "YA" << endl;
            return;
        }

       
        if (i + 1 < n && b[cnt] != a[i + 1]) {
            cout << "TIDAK" << endl;
            return;
        }
    }

    
    cout << "YA" << endl;
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
