#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int ans = 0;
    long long target = (1LL << 31) - 1;
    int left = 0, right = n - 1;
    while (left < right) {
        long long current = vec[left] + vec[right];
        
        if (current == target) {
            ans++;
            left++;
            right--;
        } else if (current< target) {
            left++;
        } else {
            right--;
        }
    }
    cout << ans + (n - ans * 2) << endl;
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
