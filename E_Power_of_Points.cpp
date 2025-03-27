#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

void solve() {
    int n;
    cin >> n;
    vector<ll> vec(n);
    vector<ll> vec1(n);
    vector<ll> vec2(n);
    vector<pair<ll, ll>> vec3(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        vec3[i] = {vec[i], i}; 
    }

    sort(vec3.begin(), vec3.end());
    for (int i = 0; i < n; i++) {
        vec1[i] = vec3[i].first;
    }

    vector<ll> pref(n, 0);
    pref[0] = vec1[0];

    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + vec1[i];
    }

    ll sum = pref[n - 1];

    for (int i = 0; i < n; i++) {
        int res = vec3[i].second; 
        ll l = (i > 0) ? pref[i - 1] : 0;
        ll r = sum - pref[i];

        ll lp = (1LL * i * vec1[i]) - l;
        ll rp = r - (1LL * (n - i - 1) * vec1[i]);

        vec2[res] = lp + rp + n; 
    }

    for (int i = 0; i < n; i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
