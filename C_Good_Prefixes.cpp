#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n;
    cin >> n;

    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Create a prefix sum array
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + vec[i - 1];
    }

    long long ans=0,sum=0,maxi=0;
    for (int i = 0; i < n; i++) {
      sum+=vec[i];
      maxi=max(maxi,vec[i]);
      if(maxi==sum-maxi) ans++;
    }

    cout << ans << endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
