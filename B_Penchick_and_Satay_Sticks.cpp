#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) 
        cin >> vec[i];

    for (int i = 0; i < n; i++) {
        if ((i == 0 && (vec[i] != i + 1 && vec[i] != i + 2)) ||
            (i == n - 1 && (vec[i] != i + 1 && vec[i] != i)) ||
            (i > 0 && i < n - 1 && (vec[i] != i + 1 && vec[i] != i + 2 && vec[i] != i))) {
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
