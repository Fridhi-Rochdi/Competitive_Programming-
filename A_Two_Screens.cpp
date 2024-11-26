#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    string s;
    cin>>s;
    string b;
    cin>>b;
     int cnt=0;

    for(int i=0;i<s.length();i++){
       if(s[i]==b[i])cnt++;
       else break;
    }
    int ans=cnt;
    if(ans!=0)ans++;
    cout<<ans+(s.length()-cnt)+(b.length()-cnt)<<endl;
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
