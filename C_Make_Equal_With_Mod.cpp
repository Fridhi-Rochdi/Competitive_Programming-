#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;cin>>n;
      vector<int>vec(n);
      bool ones=false ,zeros=false;
      for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]==1)ones=true;
        if(vec[i]==0)zeros=true;
      }
      if(ones && zeros ){
        cout<<"NO"<<endl;
        return;
      }
      if(!ones ){
        cout<<"YES"<<endl;
        return;
      }
      sort(vec.begin(),vec.end());
      
      for(int i=0;i<n-1;i++){
         if(vec[i]+1==vec[i+1]){
            cout<<"NO"<<endl;
        return;
         }
      }
      cout<<"YES"<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}