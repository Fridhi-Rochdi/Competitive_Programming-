#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;


    if (n == 1 || n == 3) {
        cout << -1 << endl;
        return;
    }


    if (n % 2 == 0) {
    
        for (int i = 1; i <= n/2; i ++) {
            cout << i << " " << i << " ";
        }
        cout << endl;
        return;
    }


    if (n % 2 != 0) {
        if (n < 27) {
            cout << -1 << endl;
        } else {
    
            cout << "1 2 2 3 3 4 4 5 5 1 13 6 6 7 7 8 8 9 9 10 10 11 11 12 12 1 13 ";
            
          n-=27;
            for (int i = 1; i <= n/2; i++) {
                cout << 13 + i << " " << 13 + i << " ";
            }
            cout << endl;
        }
        return;
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
