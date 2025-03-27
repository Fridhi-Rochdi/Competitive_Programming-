#include<bits/stdc++.h>
using namespace std;
void solve(){
    
    long long  l,r;

    
        cin >> l >> r;
        
        if(l==r && l!=1){
            cout<<0<<endl;return;
        }
        if(l==r ){
            cout<<1<<endl;return;
        }
        cout << (r - l ) << endl;








}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve(); 
    }
    
}