#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, k; 
    cin >> n >> m >> k;
    
    if (k == 1) {
       
        cout << 1 << endl;
        return;
    }
    if (k > 3) {
      
        cout << 0 << endl;
        return;
    }
    if (k == 3 && m <= n) {
       
        cout << 0 << endl;
        return;
    }
    if (k == 2) {
        if (m <= n) {
           
            cout << m << endl;
        } else {
           
            cout << n + ((m-n) / n) << endl;
        }
        return;
    }
    if (k == 3) {
        if (m > n) {
          
            cout << m - n - ((m-n) / n)  << endl;
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
