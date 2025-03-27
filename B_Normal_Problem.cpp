#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  for(int i=s.length()-1;i>=0;i--){
    if(s[i]=='p')cout<<'q';
    else if(s[i]=='q')cout<<'p';
    else cout<<s[i];
  }
  cout<<endl;
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
