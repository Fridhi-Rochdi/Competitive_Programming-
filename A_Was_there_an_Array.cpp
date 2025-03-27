#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> vec(n-2);
    
    for (int i = 0; i < n-2; i++) {
        cin >> vec[i];
    }

    
    for (int i = 1; i < n - 3; i++) {
        if (vec[i - 1] == 1 && vec[i] == 0 && vec[i + 1] == 1) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        solve();
    }
    
    return 0;
}
