#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> vec(n);
    long long maxi = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        maxi = max(maxi, vec[i]);
    }

    long long best_i = -1;
    for (long long t = 0; t < k; t++) {
        long long candidate = maxi + t;
        bool valid = true;

       
        for (int j = 0; j < n; j++) {
            if (abs(candidate - vec[j]) % (2 * k) >= k) {
                valid = false;
                break;
            }
        }

        if (valid) {
            best_i = candidate;
            break;
        }
    }

    cout << best_i << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}