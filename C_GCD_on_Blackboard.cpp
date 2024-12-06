#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll _Gcd(ll a, ll b) {
    return b == 0 ? a : _Gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> vec1(n);
    vector<int> vec2(n);

    vec1[0] = vec[0];
    for (int i = 1; i < n; i++) {
        vec1[i] = _Gcd(vec1[i - 1], vec[i]);
    }

    vec2[n - 1] = vec[n - 1]; 
    for (int i = n - 2; i >= 0; i--) {
        vec2[i] = _Gcd(vec2[i + 1], vec[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int left = i - 1, right = i + 1, gcd = 0;

        if (left < 0) {
            gcd = vec2[right];
        } else if (right >= n) {
            gcd = vec1[left];
        } else {
            gcd = _Gcd(vec2[right], vec1[left]);
        }

        ans = max(gcd, ans);
    }
    cout << ans << endl;
}

int main() {
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
