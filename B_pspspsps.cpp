#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int  cnts=0,cntp=0;
    if(s[0]=='s') s[0]='#';
    if(s[n-1]=='p') s[n-1]='#';

   for(auto c:s){
    if(c=='p') cntp=1;
    if(c=='s') cnts=1;
   }
   
   if(cnts && cntp){
    cout<<"NO"<<endl;

   }
   else {
    cout<<"YES"<<endl;
   }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}