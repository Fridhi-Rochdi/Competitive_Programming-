#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, m;
    cin >> n >> m;
    long long ans=0;
    for(long long  i=1;i*i<=n;i++){
        if(n%i==0){
        if(m*i<=n){
            ans=max(ans,i);
        }
        if(i>=m)ans=max(ans,n/i);
    }}
    cout<<ans<<endl;
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
