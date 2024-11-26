#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   vector<int>vec(n);
   for(int i=0;i<n;i++){
        cin>>vec[i];
   }
   for(int i=0;i<n-1;i++){
     if(abs(vec[i]-vec[i+1])!=5 && abs(vec[i]-vec[i+1])!=7) {
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