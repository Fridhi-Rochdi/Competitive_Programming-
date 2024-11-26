 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
    int n;
    cin>>n;
    vector<int>vec(n);
    map<int ,int>mp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mp[vec[i]]++;

    }
  int ans=0;
 for(auto i: mp){
    ans+=(i.second/2);
 }
 cout<<ans<<endl;

    
 }
 int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
 }