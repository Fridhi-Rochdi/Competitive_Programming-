#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    while (k>0 && x!=1)
    {
       
         int ans1=x/y;
         int ans2=(ans1+1)*y;
         ans2=max(1,ans2-x);
         ans2=min(k,ans2);
    
         x+=ans2;
         k-=ans2;
        while (x % y == 0) {
                x /= y; 
            }

    }
    cout << x+k%(y-1) << endl;
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
