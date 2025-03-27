#include <bits/stdc++.h>
using namespace std;


void solve(){
         long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> vec(n);

        for (auto &x:vec) {
            cin >> x;
        }

        long long ans = r - l + 1; r = min(r, n);l = max(l, 1LL);
        long long start = l - 1;

        ans = min(ans, r);
        ans = min(ans, n - start);
        vector<long long> vec1, vec2;
        for (long long i = 0; i < r; i++) {
            vec1.push_back(vec[i]);
        }
        for (long long i = start; i < n; i++) {
            vec2.push_back(vec[i]);
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        long long sum1 = 0, sum2 = 0;
        for (long long i = 0; i < ans; i++) {
            if (i < vec1.size()) {
                sum1 += vec1[i];
            }
            if (i < vec2.size()) {
                sum2 += vec2[i];
            }
        }
        cout << min(sum1, sum2) << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int  t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}
