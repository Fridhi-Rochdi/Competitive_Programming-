#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  set<int> s;
  map<int,int>mp;
  int maxi=0;
  int cnt=0;
  for(int i = 1;i<=n;i++)s.insert(i);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    if(s.find(x)!=s.end())s.erase(x);
   if(mp[x]==0){
    cout<<x<<" ";
    cnt++;
    mp[x]++;
   }
    maxi=max(x,maxi);
  }
 for(auto e:s) cout<<e<<" "; 
  
  
  cout<<endl;


}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
