#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size() 

using ll = long long;
using vl = vector<ll>;


vl psum(const vl &a) {
    vl psum(sz(a) + 1, 0); 
    for (int i = 0; i < sz(a); ++i) {
        psum[i + 1] = psum[i] + a[i];
    }
    return psum;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s; 

 
    vl psum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        psum[i] = psum[i - 1] + (s[i - 1] - '0'); 
    }

    ll ans = 0; 
    map<int, int> mp;
    mp[0] = 1; 

    for (int i = 1; i <= n; i++) {
        int currentvalue = psum[i] - i; 
        ans += mp[currentvalue]; 
        mp[currentvalue]++; 
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
