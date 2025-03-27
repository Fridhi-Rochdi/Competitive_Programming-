#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x:vec) {
        cin >> x;
    }
    vector<long long> pref(n + 1);
    pref[0]=0;
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + max(0, vec[i - 1]);
    }
    vector<long long>  suff(n +1);
    suff[n]=0;
    for (int i = n - 1; i >= 0; i--) {
        suff[i] = suff[i + 1] + max(0, -vec[i]);
    }

    long long maxi = 0;
    for (int i = 0; i <= n; i++) {
        maxi = max(maxi, pref[i] + suff[i]);
    }
    
    cout << maxi<< endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}