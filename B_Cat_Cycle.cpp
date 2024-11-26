#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,k;cin>>n>>k;
      k--;
    if(n%2==0) cout<<((k)%n+n)%n+1<<endl;
    else {
        int winbechyet9ablou=(n-1)/2;
        int gedehmnmarra=(k)/winbechyet9ablou;
        cout<<((k+gedehmnmarra)%n+n)%n+1<<endl;
       }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
}