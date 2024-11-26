#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin>>n;
    vector<long long >vec(n);
    long long maxi=0,mini=LONG_MAX;
    for(int i=0;i<n;i++){
       cin>>vec[i];
       maxi=max(maxi,vec[i]);
       mini=min(vec[i],mini);
    }
   
    long long ans=0;
    for(int i=1;i<n;i++){
        ans+=(maxi-mini);
    }
        
    
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
