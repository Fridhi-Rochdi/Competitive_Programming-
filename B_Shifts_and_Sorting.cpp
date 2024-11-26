#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    string s;
    cin>>s;
    long long ans=0,cnt=0;
    bool ok=false;
    for(int i=0;i<s.length();i++){
       
        if(s[i]=='1') ok=true;
        if(s[i]=='0' && ok ){
          ans+=i-cnt+1;
          cnt++;
        }
        
        if(!ok && s[i]=='0') cnt++;
    }
    cout<<ans<<endl;

     
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
