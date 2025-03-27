#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    int ones = count(s.begin(), s.end(), '1'); 
    int l = 1, r = ones + 1; 

    
    while (l < r - 1) {
        int mid = (l + r) / 2;
        int k = mid;
        vector<int> vec(n, 0);

        
        for (int i = n - 1; i >= 0; i--) {
            if (k > 0 && s[i] == '1') {
                vec[i] = 1;
                k--;
            }
        }

        
        bool ok = true;
        int cur = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i]) {
                cur--; 
                if (cur < 0) {
                    ok = false;
                    break;
                }
            } else {
                cur++;
            }
        }

      
        if (ok) {
            l = mid;
        } else {
            r = mid;
        }
    }

    
    int res = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1' && l > 0) {
            l--;
        } else {
            res += i + 1;
        }
    }

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
