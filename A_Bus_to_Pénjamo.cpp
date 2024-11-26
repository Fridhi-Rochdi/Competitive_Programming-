#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, r;
    cin >> n >> r;
    long long ans = 0, elib9aw = 0;

    for (long long i = 0; i < n; i++) {
        int x;
        cin >> x; 
        ans += 2 * (x / 2);  
        elib9aw += (x % 2); 
    }
 
   if(2*r-ans >elib9aw){
        ans=min((ans+2*r-ans-elib9aw),ans+elib9aw);
       
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
