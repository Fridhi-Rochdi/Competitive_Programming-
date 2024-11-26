#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    long long ans = 0;

    for (int i = 0; i <= n ; i++) {
        int a2 = n;
        int a1 = i;
        bool ok = true;

        for (int j = 0; j < k - 2; j++) {
            int temp = a1;
            a1 = a2 - temp;
            a2 = temp;
            
            if (!((a2 >= a1) && (a1 >= 0 && a2 >= 0)) ){  
                ok = false;
                break;
            }
        }

        if (ok) ans++;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
