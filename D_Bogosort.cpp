#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   vector<int>vec(n);
   for(int i=0;i<n;i++){
        cin>>vec[i];
   }
   sort(vec.begin(),vec.end());
   for(int i=n-1;i>=0;i--) cout<<vec[i]<<" ";
   cout<<endl;
   

}
int main(){
     int t;
     cin>>t;
     while(t--){
         solve();
     }
}