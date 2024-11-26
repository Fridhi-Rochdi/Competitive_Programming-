#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
       sum += a[i];
    }

   
    if (sum % x != 0) {
        cout << n << endl;
        return;
    }

   
    int left = 0, right = n - 1;


    while (left < n && a[left] % x == 0) left++;


    while (right >= 0 && a[right] % x == 0) right--;
    if (left >= n || right < 0) {
        cout << -1 << endl;
        return;
    }
    int length = max(n - left - 1, right);
    cout <<length << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
