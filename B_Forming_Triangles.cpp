#include<bits/stdc++.h>
using namespace std;
 void solve(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n ;i++)cin>>vec[i];
     sort(vec.begin(),vec.end());
     long long ans=0;
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum =vec[i]+vec[j];
            auto  it=lower_bound(vec.begin()+j+1,vec.end(),sum);

            if(it!=vec.end()){
                int cnt=it-(vec.begin());
                ans+=cnt-j-1;
            }
            

        }
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