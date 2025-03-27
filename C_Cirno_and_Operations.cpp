#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<long long > a(n);
    
    ll sum = 0;
    for (long long &x : a) {
        cin >> x;
        sum += x;
    }
    
    ll maxi = sum;
    
    
    while (n > 1) {
        vector<long long > diff(n - 1);
        ll newmaxi = 0;
        for (int i = 1; i < n; ++i) {
            diff[i - 1] = a[i] - a[i - 1];
            newmaxi+= diff[i - 1];
        }
        
        maxi = max({maxi, newmaxi, -newmaxi});
        a = diff;
        n--;
    }

    cout << maxi << "\n";
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
