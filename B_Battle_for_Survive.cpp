#include<bits/stdc++.h>
using namespace std;
 void solve(){
     int n;
     cin>>n;
     vector<int>vec(n);
     long long sum=0;
     for(int i=0;i<n;i++){
        cin>>vec[i];
         sum+=vec[i];
     }
     cout<<sum-vec[n-2]-vec[n-2]<<endl;
 }
 int main(){
    int t;cin>>t;
    while (t--)
    {
         solve();

    }
    
 }