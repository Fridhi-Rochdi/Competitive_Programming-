#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    vector<int> freq(k, 0);
    for (int i = 0; i < n; i++) {
        freq[vec[i] % k]++;
    }
    int cnt = freq[0] / 2 * 2;
    
    for (int i = 1; i <= k / 2; i++) {
        if (i != k - i) {
            cnt += min(freq[i], freq[k - i]) * 2;
        }
    }
    if (k % 2 == 0) {
        cnt += freq[k / 2] / 2 * 2;
    }

    cout << cnt << endl;
}

int main() {
    solve();
    return 0;
}
