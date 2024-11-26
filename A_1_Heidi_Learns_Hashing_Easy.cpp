#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long  r;
    cin>>r;
   if(r==1){
     cout<<"NO"<<endl;
   }
   else if(r%2!=0){
     if(r-3<=0){
        cout<<"NO"<<endl;
        return;
     }
     else {
        cout<<1<<" "<<(r-3)/2<<endl;
     }
   }
   else cout<<"NO"<<endl;
}
int main(){
solve();
}