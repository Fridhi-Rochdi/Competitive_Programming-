#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long m,a,b,c;
  cin>>m>>a>>b>>c;
  long long ans1=min(a,m)+min(b,m);
  long long ans2=max(0LL,min(c,m-a))+max(0LL,min(c-max(0LL,min(c,m-a)),m-b));
  cout<<ans1+ans2<<endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
