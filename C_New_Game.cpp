#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n,k;
    cin>>n>>k;
    vector<long long >vec(n);
    for(int i=0;i<n;i++){
       cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int ans=0,cnt=0;
    for(int i=0;i<n;i++){
         cnt=max(i,cnt);
        while(cnt+1 < n && vec[cnt+1]-vec[cnt]<=1 &&  vec[cnt+1]-vec[i]<k){
            cnt++;
        }
        
        ans=max(ans,cnt-i+1);
        
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
