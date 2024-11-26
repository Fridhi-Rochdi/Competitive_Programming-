#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> pref(n, 0);
    vector<int> suf(n, 0);

    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    
    pref[0] = vec[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + vec[i];
    }

    
    suf[n - 1] = vec[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = suf[i + 1] + vec[i];
    }

   
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) { 
        if (pref[i] == suf[i + 1]) {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main() {
    solve();
    return 0;
}
