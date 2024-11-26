
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
  vector<int>vec(n+1);
  for(int i=0;i<n;i++) cin>>vec[i];
  sort(vec.begin(),vec.end());
  int ans=k,last=0;
  for(int i=1;i<n;i++){
    long long   x=n-i+1;
     long long sum=x*vec[i]+last;
     last+=vec[i];
     if(sum>=k)break;
     else ans++;
  }
  cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}