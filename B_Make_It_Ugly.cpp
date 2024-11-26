#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int ans=n+1,cnt=-1;
    for(int i=0;i<n;i++){
        if(vec[i]!=vec[0]) {
           ans=min(ans,i-cnt-1);
           cnt=i;
        }
       
    }
    if(ans==n+1) cout<<-1<<endl;
    else cout<<min(ans,n-cnt-1)<<endl;

}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
