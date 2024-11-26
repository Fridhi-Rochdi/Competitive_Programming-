#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, r;
    cin >> n >> r;
    long long ans = 0, elib9aw = 0;

    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x; 
        elib9aw=max(elib9aw,x);
        ans+=x;
    }
 
   
     

    cout << max((ans+r-1)/r,elib9aw)<< endl;
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
