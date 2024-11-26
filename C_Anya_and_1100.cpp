#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i <= n - 4; i++) {
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
            cnt++;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int c;
        char ch;
        cin >> c >> ch;
        c--;
        
        for (int i = max(0, c - 3); i <= min(n + 4, c); i++) {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                cnt--;
            }
        }

        
        s[c] = ch;
        for (int i = max(0, c - 3); i <= min(n + 4, c); i++) {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                cnt++;
            }
        }
        if (cnt == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
