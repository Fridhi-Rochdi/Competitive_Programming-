#include<bits/stdc++.h>
using namespace std;
 void solve(){
     int n;
     cin>>n;
     vector<int>vec(n);
     for(int i=0;i<n;i++) cin>>vec[i];
    if(n>=3) cout<<"NO"<<endl;
    else if(vec[1]-vec[0]>1){
     cout<<"YES"<<endl;
     }
     else {
       cout<<"NO"<<endl; 
     }

 }
 int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0; 
 }