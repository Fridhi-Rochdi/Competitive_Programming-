#include <bits/stdc++.h>
using namespace std;

long long verified(long long sum, int element, int k) {
    long long needed = ceil((element * 100.0) / k); 
    return max(needed - sum, 0LL); 
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    long long sum = vec[0], ans = 0;

    for (int i = 1; i < n; i++) {
        long long addition = verified(sum, vec[i], k);
        ans += addition;
        sum += addition + vec[i];
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
