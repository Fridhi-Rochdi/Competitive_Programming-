#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;

    if (b < c || d < a) {
        cout << 1 << endl;
        return;
    }
   
    int ans=min(b,d)-max(a,c);
   if(a!=c) ans++;
   if(b!=d) ans++;
   cout<<ans<<endl;
   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
