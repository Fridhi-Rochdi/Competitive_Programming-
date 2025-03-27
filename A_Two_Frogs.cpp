#include<bits/stdc++.h>
using namespace std ;
void solve(){
    int n,a,b;cin>>n>>a>>b;
    if(a==n && b==n-1){
        cout<<"NO"<<endl;
        return;
    }
     if(a==1 && b==2){
        cout<<"NO"<<endl;
        return;
    }
    if(abs(a-b)%2==0) {
        
            cout<<"YES"<<endl;
        return; 

    }
   
    cout<<"NO"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}